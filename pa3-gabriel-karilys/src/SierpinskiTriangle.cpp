#include "SierpinskiTriangle.h"

Triangle::Triangle(string name, int min_level, int actual_level, int max_level) : AbstractFractal(name) {
    this->limit = max_level;
    this->min_limit = min_level;
    this->triangle_level = actual_level;

}

void Triangle::draw() {
    draw((ofGetWidth() - size) / 2, ofGetHeight() / 2 - 0.4 * size, size, triangle_level, "white");
}

void Triangle::draw(float x, float y, float size, int n, string color) {
    if (n == 0) {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));
    
    // Using `n` directly for simplicity. Adjust the conditions based on your setup.
    if (color  == "white") {
        ofSetColor(ofColor::white); // Color for the base level
    } else if (color == "orchid") {
        ofSetColor(ofColor::orchid); // Color for the second level
    } else if (color == "blue") {
        ofSetColor(ofColor::blue); // Color for the third level
    } else {
        ofSetColor(ofColor::lightSeaGreen); // Color for other levels
    }
    
    ofDrawTriangle(a, b, c);

    // Recursively draw the smaller triangles
    if (n == 1){
        draw(x, y, size / 2, 0, "teal");
        draw((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, 0, "teal");
        draw((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, 0, "teal");
    }
    else if (n == 2){
        draw(x, y, size / 2, 1, "white");
        draw((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, 1, "orchid");
        draw((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, 1, "teal");
    }
    else if (n == 3){
        draw(x, y, size / 2, 2, "teal");
        draw((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, 2, "white");
        draw((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, 2, "orchid");
    }
    else{
        draw(x, y, size / 2, n-1, "teal");
        draw((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n-1, "teal");
        draw((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n-1, "teal");
    }
}