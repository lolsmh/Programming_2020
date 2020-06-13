#pragma once
#include <GLUT/GLUT.h>
#include "Elements.hpp"
#include <cmath>

colours Element::ColourCheck(colour NeededColour){
    colours temp_colour;
    switch (NeededColour) {
        case white:
            temp_colour.red = 1;
            temp_colour.green = 1;
            temp_colour.blue = 1;
            return temp_colour;
            
        case yellow:
            temp_colour.red = 1;
            temp_colour.green = 1;
            temp_colour.blue = 0;
            return temp_colour;
            
       case green:
            temp_colour.red = 0;
            temp_colour.green = 1;
            temp_colour.blue = 0;
            return temp_colour;
            
        case red:
            temp_colour.red = 1;
            temp_colour.green = 0;
            temp_colour.blue = 0;
            return temp_colour;
            
        case blue:
            temp_colour.red = 0;
            temp_colour.green = 0;
            temp_colour.blue = 1;
            return temp_colour;
            
        case orange:
            temp_colour.red = 1;
            temp_colour.green = 0.55;
            temp_colour.blue = 0;
            return temp_colour;
            
        default:
            temp_colour.red = 0.1;
            temp_colour.green = 0.1;
            temp_colour.blue = 0.1;
            return temp_colour;
    }
}

Element::Element(float position_x, float position_y, float position_z, colour temp_colour1,colour temp_colour2, colour temp_colour3, colour temp_colour4, colour temp_colour5, colour temp_colour6, orientation temp_orientation) {
    _orientation = temp_orientation;
    Points temp_position (position_x, position_y, position_z);
    _position = temp_position;
    _faces.resize(6);
    
    Points temp_point (0.5, -0.5, -0.5);
    _faces[0].push_back(temp_point);
    temp_point.set(0.5, 0.5, -0.5);
    _faces[0].push_back(temp_point);
       temp_point.set(-0.5, 0.5, -0.5);
    _faces[0].push_back(temp_point);
       temp_point.set(-0.5, -0.5, -0.5);
    _faces[0].push_back(temp_point);
    
    temp_point.set(0.5, 0.5, 0.5);
    _faces[1].push_back(temp_point);
    temp_point.set(0.5, 0.5, -0.5);
    _faces[1].push_back(temp_point);
       temp_point.set(-0.5, 0.5, -0.5);
    _faces[1].push_back(temp_point);
       temp_point.set(-0.5, 0.5, 0.5);
    _faces[1].push_back(temp_point);
    
    temp_point.set(-0.5, -0.5, 0.5);
    _faces[2].push_back(temp_point);
    temp_point.set(-0.5, 0.5, 0.5);
    _faces[2].push_back(temp_point);
       temp_point.set(-0.5, 0.5, -0.5);
    _faces[2].push_back(temp_point);
       temp_point.set(-0.5, -0.5, -0.5);
    _faces[2].push_back(temp_point);
    
    temp_point.set(0.5, -0.5, -0.5);
    _faces[3].push_back(temp_point);
    temp_point.set(0.5, 0.5, -0.5);
    _faces[3].push_back(temp_point);
       temp_point.set(0.5, 0.5, 0.5);
    _faces[3].push_back(temp_point);
       temp_point.set(0.5, -0.5, 0.5);
    _faces[3].push_back(temp_point);
    
    temp_point.set(0.5, -0.5, -0.5);
    _faces[4].push_back(temp_point);
    temp_point.set(0.5, -0.5, 0.5);
    _faces[4].push_back(temp_point);
       temp_point.set(-0.5, -0.5, 0.5);
    _faces[4].push_back(temp_point);
       temp_point.set(-0.5, -0.5, -0.5);
    _faces[4].push_back(temp_point);
    
    temp_point.set(0.5, -0.5, 0.5);
    _faces[5].push_back(temp_point);
    temp_point.set(0.5, 0.5, 0.5);
    _faces[5].push_back(temp_point);
       temp_point.set(-0.5, 0.5, 0.5);
    _faces[5].push_back(temp_point);
       temp_point.set(-0.5, -0.5, 0.5);
    _faces[5].push_back(temp_point);
    
    FieldColour.push_back(temp_colour1);
    FieldColour.push_back(temp_colour2);
    FieldColour.push_back(temp_colour3);
    FieldColour.push_back(temp_colour4);
    FieldColour.push_back(temp_colour5);
    FieldColour.push_back(temp_colour6);
}

void Element::draw(){
    colours temp_colour;
    double temp_x = 0, temp_y = 0, temp_z = 0;
    for (int i = 0; i < _faces.size(); i++) {
        temp_colour = ColourCheck(FieldColour[i]);
        glBegin(GL_POLYGON);
        for (auto &j : _faces[i]){
            glColor3f(temp_colour.red, temp_colour.green, temp_colour.blue);
            switch (_rotation) {
                case NoRotation:
                    temp_x = j.x;
                    temp_y = j.y;
                    temp_z = j.z;
                    break;
                case UdRotation:
                    temp_x = j.x;
                    temp_y = (j.y) * cos(_angle) - (j.z) * sin(_angle);
                    temp_z = (j.z) * cos(_angle) + (j.y) * sin(_angle);
                    break;
                case LrRotation:
                    temp_x = (j.x) * cos(_angle) - (j.z) * sin(_angle);
                    temp_y = j.y;
                    temp_z = (j.z) * cos(_angle) + (j.x) * sin(_angle);
                    break;
                case ClockRotation:
                    temp_x = (j.x) * cos(_angle) - (j.y) * sin(_angle);
                    temp_y = (j.y) * cos(_angle) + (j.x) * sin(_angle);
                    temp_z = j.z;
                    break;
                default:
                    temp_x = j.x;
                    temp_y = j.y;
                    temp_z = j.z;
                    break;
            }
            glVertex3f(temp_x + _position.x, temp_y + _position.y, temp_z + _position.z);
            j.x = temp_x;
            j.y = temp_y;
            j.z = temp_z;
        }
        glEnd();
    }
}

