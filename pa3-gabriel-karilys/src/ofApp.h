#pragma once

#include <cmath>
#include "Circles.h"
#include "ofMain.h"
#include "Tree.h"
#include "SierpinskiTriangle.h"
#include "BarnsleyFern.h"
#include "SnowFlake.h"
#include "Snowball.h"
#include "Fractal3D.h"
#include "Star.h"
class ofApp : public ofBaseApp {
  private:
    char mode = '1';
    float angle = 0;

    int limit = 0;
    int min_limit = 0;
    int cnt = 0;

    bool debugInfo = false;

    bool play = false; 
    bool increasing = true;

  public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    void drawDebugInfo();
    void PushFractals();

    ofColor getRandomColor(int n); // Generate random colors

    Circles* my_circle;
    Tree* my_tree;
    Triangle* my_triangle;
    Fern* fern;
    SnowFlake* my_snowflake;
    Snowball* my_snowball;
    Fractal3D* my_3dfractal;
    Star* my_star;
    
    vector<Fractal*> fractal;
    ofEasyCam cam;
    ofTrueTypeFont text;
    ofTrueTypeFont dataText;
};
