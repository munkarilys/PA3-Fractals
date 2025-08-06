#pragma once
#include "AbstractFractal.h"
#include "ofMain.h"

class Snowball : public AbstractFractal {
    private:
    int limit;
    int min_limit;
    int snowball_level;

    public:
    Snowball(string name, int min_level, int actual_level, int max_level);

    void draw();
    void draw(int x, int y, int width, int height, int snowball_level); // Declaration of the recursive drawing function
    void setLevel(int level) { snowball_level = level;}
    int getLevel() {return snowball_level;}
    int getMinLevel() {return min_limit;}
    int getMaxLevel() {return limit;}
   
};