#pragma once
#include "AbstractFractal.h"

#include <cmath>
#include "ofMain.h"
class Circles : public AbstractFractal {

private:
    int limit;
    int min_limit;
    int circle_level;
    float angle = 0; // For rotating the circles
    
public:
    Circles(string name, int min_level, int actual_level, int max_level);

    void draw();
    void draw(float x, float y, float r, int n, int maxit); // Declaration of the recursive drawing function
    void setLevel(int level) { circle_level = level;}
    int getLevel() {return circle_level;}
    int getMinLevel() {return min_limit;}
    int getMaxLevel() {return limit;}

};