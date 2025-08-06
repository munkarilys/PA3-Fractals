#pragma once
#include "ofMain.h"
#include "AbstractFractal.h"

class Tree : public AbstractFractal {
    private:
    // string name;
    int limit;
    int min_limit;
    int tree_level;
    float length = 0.31 * ofGetHeight();
    public:
    
    Tree(string name, int min_level, int actual_level, int max_level);

    void draw();
    void draw(float x, float y, int tree_level, float length, float rad); // Declaration of the recursive drawing function

    void setLevel(int level) {tree_level = level;} 
    int getLevel() {return tree_level;}
    int getMinLevel() {return min_limit;}
    int getMaxLevel() {return limit;}

};