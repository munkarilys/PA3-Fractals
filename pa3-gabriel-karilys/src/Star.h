#pragma once

#include "ofMain.h"
#include "AbstractFractal.h"

class Star : public AbstractFractal {

private:
    int limit;
    int min_limit;
    int star_level;
    float angle = 0; 

public:
    void setup();
    void update();
    void draw();
    void drawStar(float x, float y, float radius,int numPoints, int star_level);
    Star(string name, int min_level, int actual_level, int max_level);
    
    float angleOffset;  // Used to animate rotation

    void setLevel(int level) { star_level = level;}
    int getLevel() {return star_level;}
    int getMinLevel() {return min_limit;}
    int getMaxLevel() {return limit;}

};
