#pragma once
#include "Enum.hpp"
#include "Elements.hpp"
#include <vector>
class CubikRubik{
public:
    CubikRubik();
    
    void getFile();
    
    void UD(std::vector<int>, std::vector<int>, int, double);
    void LR(std::vector<int>, std::vector<int>, int, double);
    void CLOCK(std::vector<int>, std::vector<int>, int, double);
    void CENTER_UD(std::vector<int>, std::vector<int>, double);
    void CENTER_LR(std::vector<int>, std::vector<int>, double);
    
    void UP();
    void UP_R();
    void RIGHT();
    void RIGHT_R();
    void LEFT();
    void LEFT_R();
    void DOWN();
    void DOWN_R();
    void CLOCK_R();
    void CLOCK_L();
    
    void CENTER_UP();
    void CENTER_DOWN();
    void CENTER_LEFT();
    void CENTER_RIGHT();
    
    void pif_paf();
    void left_pif_paf();
    void all_left();
    void all_right();
    void all_up();
    void all_down();
    
    void disassembler();
    void assembler();
    
    void cross_iteration();
    void lower_corner_iteration();
    void middle_edges_iteration();
    void top_figure_solver();
    void top_cross_reposition_iteration();
    void top_corners_positioning_iteration();
    void top_corners_orientation_iteration();
    void top_corners_reorientation();
    
    int find_element(colour,elementType);
    void draw();
    int element_raiser();
    
    ~CubikRubik();
    
private:
    std::vector<std::vector<Element*>>_elements;
};
