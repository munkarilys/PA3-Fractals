#include "Tree.h"

Tree::Tree(string name, int min_level, int actual_level, int max_level) : AbstractFractal(name) {
    this->limit = max_level;
    this->min_limit = min_level;
    this->tree_level = actual_level;

}

void Tree::draw() {

    draw(ofGetWidth() / 2, ofGetHeight() - 20, tree_level, length, 1.5 * PI);
    draw(ofGetWidth() / 8, ofGetHeight() - 20, tree_level, 0.10 * ofGetHeight(), 1.5 * PI);
    draw(ofGetWidth() * 0.88, ofGetHeight() - 20, tree_level, 0.10 * ofGetHeight(), 1.5 * PI);

}
void Tree::draw(float x, float y, int tree_level, float length, float rad)  {
    
    if (tree_level == 0) return;

    float x2 = x + length * cos(rad);
    float y2 = y + length * sin(rad);
    if (tree_level == 1) {
        ofSetColor(ofColor::white); // Red outline for the first level
    } else if (tree_level == 2) {
        ofSetColor(ofColor::orchid); // Green outline for the second level
    } else if (tree_level == 3){
        ofSetColor(ofColor::blue); // Blue outline for other levels
    } else {
        ofSetColor(ofColor::lightSeaGreen);
    }
    ofDrawLine(x, y, x2, y2);

    draw(x2, y2, tree_level - 1, 0.7 * length, rad + 0.2 * PI);
    draw(x2, y2, tree_level - 1, 0.7 * length, rad - 0.2 * PI);
}