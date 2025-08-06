#pragma once
#include <string>
using namespace std;

class Fractal {
     public: 
     virtual void draw() = 0;
     //Getters
     virtual int getLevel() = 0;
     virtual string getName() = 0;
     virtual int getMaxLevel() = 0;
     virtual int getMinLevel() = 0;
    
     //Setters
     virtual void setLevel(int level) = 0;
     virtual void setName(string name) = 0;
     
};

