#pragma once

#include "AbstractFractal.h"
#include "ofMain.h"

class Triangle : public AbstractFractal {

    private:
    int limit;
    int min_limit;
    int triangle_level;
    float size = 0.88 * ofGetHeight();

    public:
    Triangle(string name, int min_level, int actual_level, int max_level);
    void draw();
    void draw(float x, float y, float size, int n, string color);

    void setLevel(int level) {triangle_level = level;} 
    int getLevel() {return triangle_level;}
    int getMinLevel() {return min_limit;}
    int getMaxLevel() {return limit;}

};