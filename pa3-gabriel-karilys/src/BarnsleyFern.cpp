#include "BarnsleyFern.h"

Fern::Fern(string name, int min_level, int actual_level, int max_level) : AbstractFractal(name) {
    this->limit = max_level;
    this->min_limit = min_level;
    this->fern_level = actual_level;
}

void Fern::draw() {
    draw(0, 0, 10 * 1000 * fern_level);
}

void Fern::draw(float x, float y, float n) {    
    if (n == 0) return;

    float r = ofRandom(1);

    float px = ofMap(x, -2.1820, 2.6558, 0, ofGetWidth());
    float py = ofMap(y, 0, 9.9983, ofGetHeight(), 0);
    if (n <= 10000) {
        ofSetColor(ofColor::white); // Red outline for the first level
    } else if (n <= 25000 && n > 15000) {
        ofSetColor(ofColor::orchid); // Green outline for the second level
    } else if (n <= 35000 && n > 25000){
        ofSetColor(ofColor::blue); // Blue outline for other levels
    } else {
        ofSetColor(ofColor::lightSeaGreen);
       
    }
    ofFill();
   
    //ofDrawCircle(px, py, 0.6);
    ofDrawLine(px, py, px, py + 10); //We changed circles for lines.

    if (r < 0.01)
        draw(0, 0.16 * y, n - 1);

    else if (r < 0.86)
        draw(0.85 * x + 0.04 * y, -0.04 * x + 0.85 * y + 1.6, n - 1);

    else if (r < 0.93)
        draw(0.2 * x - 0.26 * y, 0.23 * x + 0.22 * y + 1.6, n - 1);

    else
        draw(-0.15 * x + 0.28 * y, 0.26 * x + 0.24 * y + 0.44, n - 1);
}
