#include "Snowball.h"

Snowball::Snowball(string name, int min_level, int actual_level, int max_level) : AbstractFractal(name) {
    this->limit = max_level;
    this->min_limit = min_level;
    this->snowball_level = actual_level;
}

void Snowball::draw() {
    const int initialWidth = 100; // Reduced width for more iterations
    const int initialHeight = 100; // Reduced height for more iterations
    const int centerX = ofGetWindowWidth() / 2;
    const int centerY = ofGetWindowHeight() / 2;

    // Start the recursive drawing with the initial square
    draw(centerX, centerY, initialWidth, initialHeight, snowball_level);
}

void Snowball::draw(int x, int y, int width, int height, int level) {
    if (level <= 0) {
        return;
    }

    // Set colors based on the current level
    switch (level) {
        case 1:
            ofSetColor(ofColor::white); // White for the base level
            break;
        case 2:
            ofSetColor(ofColor::orchid); // Orchid for the second level
            break;
        case 3:
            ofSetColor(ofColor::blue); // Blue for the third level
            break;
        default:
            ofSetColor(ofColor::lightSeaGreen); // Sea Green for higher levels
            break;
    }

    // Draw the central square
    ofDrawRectangle(x - width / 2, y - height / 2, width, height);

    if (level > 1) {
        float angleStep = TWO_PI / (level + 1); // Distribute squares based on level
        float radius = 1.5 * width; // Distance from center increases with size of the square

        for (int i = 0; i < level + 1; i++) {
            float angle = i * angleStep;
            int newX = x + radius * cos(angle);
            int newY = y + radius * sin(angle);
            draw(newX, newY, width * 0.75, height * 0.75, level - 1); // Decrease size and continue recursively
        }
    }
}
