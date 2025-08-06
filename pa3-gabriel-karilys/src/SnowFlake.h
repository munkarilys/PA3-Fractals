#pragma once

#include "ofMain.h"
#include <cmath>
#include "AbstractFractal.h"

/**
 * @brief Koch SnowFlake Fractal
 *
 */

class SnowFlake : public AbstractFractal {
  private:
    glm::vec2 start;
    glm::vec2 end;
    int limit = 6;
    int min_limit = 1;
    int snowflake_level = 3;
  
  public:
    SnowFlake();
    
    SnowFlake(glm::vec2 start, glm::vec2 end);
    virtual ~SnowFlake() {}

    glm::vec2 getStart() const { return start;  }
    glm::vec2 getEnd() const { return end;  }
    void setStart(glm::vec2 start) { this->start = start; }
    void setEnd(glm::vec2 end) { this->end = end; }

    void draw();
    void draw(int n, SnowFlake *flake); // int depth

    glm::vec2 getA();
    glm::vec2 getB();
    glm::vec2 getC();
    glm::vec2 getD();
    glm::vec2 getE();

    void setLevel(int level) {snowflake_level = level;} 
    int getLevel() {return snowflake_level;}
    int getMinLevel() {return min_limit;}
    int getMaxLevel() {return limit;}
};