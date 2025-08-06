#pragma once

#include "AbstractFractal.h"
#include "ofMain.h"

class Fern : public AbstractFractal {
    private:
    int limit;
    int min_limit;
    int fern_level;

    public:
    Fern(string name, int min_level, int actual_level, int max_level);
    void draw();
    void draw(float x, float y, float n);
    void setLevel(int level) {fern_level = level;} 
    int getLevel() {return fern_level;}
    int getMinLevel() {return min_limit;}
    int getMaxLevel() {return limit;}
};