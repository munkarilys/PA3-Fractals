#include "Circles.h"

Circles::Circles(string name, int min_level, int actual_level, int max_level) : AbstractFractal(name) {
    this->limit = max_level;
    this->min_limit = min_level;
    this->circle_level = actual_level;
    
}

void Circles::draw() {

            float r = 0.31 * ofGetHeight();
            angle += 0.01;
        
            draw(ofGetWidth() / 2, ofGetHeight() / 2, r, circle_level, circle_level);
        
};
        // Add more cases for other modes if necessary
void Circles::draw(float x, float y, float r, int n, int maxit) {
    if (n == 0) return;

    int delta = r * 0.35;

    // Color settings
    if (maxit - n == 0) {
        ofSetColor(ofColor::fromHex(0x385E72));
    } else if (maxit - n == 1) {
        ofSetColor(ofColor::fromHex(0x6AABD2));
    } else if (maxit - n == 2) {
        ofSetColor(ofColor::fromHex(0xB7CFDC));
    } else if (maxit - n == 3) {
        ofSetColor(ofColor::fromHex(0xFF8210));
    } else {
        ofSetColor(ofColor::fromHex(0xFFD898));
    }

    ofDrawCircle(x, y, r);

    float angle1 = angle;
    float angle2 = PI / 3 + angle;
    float angle3 = PI + angle;
    float angle4 = 2 * PI / 3 + angle;
    float angle5 = 4 * PI / 3 + angle;
    float angle6 = 5 * PI / 3 + angle;

    draw(x + r * cos(angle1), y + r * sin(angle1), delta, n - 1, maxit);
    draw(x + r * cos(angle2), y + r * sin(angle2), delta, n - 1, maxit);
    draw(x + r * cos(angle3), y + r * sin(angle3), delta, n - 1, maxit);
    draw(x + r * cos(angle4), y + r * sin(angle4), delta, n - 1, maxit);
    draw(x + r * cos(angle5), y + r * sin(angle5), delta, n - 1, maxit);
    draw(x + r * cos(angle6), y + r * sin(angle6), delta, n - 1, maxit);

}