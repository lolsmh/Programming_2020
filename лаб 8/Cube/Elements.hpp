#pragma once

#include "Points.hpp"
#include "Enum.hpp"
#include "Color.hpp"
#include <vector>

class Element{
public:
    Element(float, float, float, colour, colour, colour, colour, colour, colour, orientation);
    void draw();
    colours ColourCheck (colour);
    std::vector<colour>FieldColour;
    std::vector<std::vector<Points>>_faces;
    orientation _orientation;
    rotation _rotation = NoRotation;
    Points _position;
    double _angle = 0;
    bool _right_pos = true;
    bool _corners_position = true;
};
