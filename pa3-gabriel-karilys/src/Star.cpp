#include "Star.h"

Star::Star(string name, int min_level, int actual_level, int max_level) : AbstractFractal(name) {
    this->limit = max_level;
    this->min_limit = min_level;
    this->star_level = actual_level;
    
}

void Star::draw(){
    float x = ofGetWidth() / 2;  // Center X
    float y = ofGetHeight() / 2; // Center Y
    float radius = 400;          // Initial radius of the star      // Number of recursive levels
    drawStar(x, y, radius, 5, star_level);

}

void Star::drawStar(float x, float y, float radius, int numPoints, int star_level){
    if (star_level == 0) return;  // Base case for recursion

    // Calculate points for a simple 5-point star
    float angle = TWO_PI / numPoints;
    float halfAngle = angle / 2.0;

    // Set color based on recursion level
    ofSetColor(ofColor(255, 255 / star_level, 0));  // Different shade of yellow
    
    // Draw the star
    ofBeginShape();
    for (int i = 0; i < numPoints; i++) {
        // Outer point
        float outerX = x + radius * cos(i * angle);
        float outerY = y + radius * sin(i * angle);
        ofVertex(outerX, outerY);

        // Inner point
        float innerX = x + (radius / 2) * cos(i * angle + halfAngle);
        float innerY = y + (radius / 2) * sin(i * angle + halfAngle);
        ofVertex(innerX, innerY);
    }
    ofEndShape(true);

    // Recurse with a smaller star, offset slightly
    drawStar(x + radius * 0.5, y, radius * 0.5, numPoints, star_level - 1);
}
