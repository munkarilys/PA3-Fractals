#include "ofApp.h"
#include "SnowFlake.h"
#include "Fractal3D.h"
#include "Circles.h"
#include "Fractal.h"
#include "AbstractFractal.h"
#include "Tree.h"
#include "Snowball.h"
#include "Star.h"

//--------------------------------------------------------------
void ofApp::setup() {
    cam.setUpAxis({0,0,1});
    cam.setDistance(200);
    text.load("Fonts/fractalFont.otf",20);
    dataText.load("Fonts/fractalFont.otf",15);
    PushFractals();
}

//--------------------------------------------------------------
void ofApp::update() {


        if (play) {
            cnt ++;
            if (cnt == 10){
                cnt = 0;
            

        if (increasing == true && mode == '1') {
            if (my_circle->getLevel() < my_circle->getMaxLevel()) {
                my_circle->setLevel(my_circle->getLevel() + 1); // Increase depth
            } else {
                increasing = false; // Reached max, start decreasing
            }
        } else if(!increasing == true && mode == '1'){
            if (my_circle->getLevel() > 1) {
                  my_circle->setLevel(my_circle->getLevel() - 1); // Decrease depth
            } else {
                increasing = true; // Reset to start increasing on next play
            }
        }
        else if (increasing == true && mode == '2') {
            if (my_tree->getLevel() < my_tree->getMaxLevel()) {
                my_tree->setLevel(my_tree->getLevel() + 1); // Increase depth
            } else {
                increasing = false; // Reached max, start decreasing
            }
        } else if(!increasing == true && mode == '2') {
            if (my_tree->getLevel() > 1) {
                  my_tree->setLevel(my_tree->getLevel() - 1); // Decrease depth
            } else {
                increasing = true; // Reset to start increasing on next play
            }
    }
     else if (increasing == true && mode == '3') {
            if (my_triangle->getLevel() < my_triangle->getMaxLevel()) {
                my_triangle->setLevel(my_triangle->getLevel() + 1); // Increase depth
            } else {
                increasing = false; // Reached max, start decreasing
            }
        } else if(!increasing == true && mode == '3') {
            if (my_triangle->getLevel() > 1) {
                  my_triangle->setLevel(my_triangle->getLevel() - 1); // Decrease depth
            } else {
                increasing = true; // Reset to start increasing on next play
            }
    }
     else if (increasing == true && mode == '4') {
            if (fern->getLevel() < fern->getMaxLevel()) {
                fern->setLevel(fern->getLevel() + 1); // Increase depth
            } else {
                increasing = false; // Reached max, start decreasing
            }
        } else if(!increasing == true && mode == '4') {
            if (fern->getLevel() > 1) {
                  fern->setLevel(fern->getLevel() - 1); // Decrease depth
            } else {
                increasing = true; // Reset to start increasing on next play
            }
    }
     else if (increasing == true && mode == '5') {
            if (my_snowflake->getLevel() < my_snowflake->getMaxLevel()) {
                my_snowflake->setLevel(my_snowflake->getLevel() + 1); // Increase depth
            } else {
                increasing = false; // Reached max, start decreasing
            }
        } else if(!increasing == true && mode == '5') {
            if (my_snowflake->getLevel() > 1) {
                  my_snowflake->setLevel(my_snowflake->getLevel() - 1); // Decrease depth
            } else {
                increasing = true; // Reset to start increasing on next play
            }
    }
     else if (increasing == true && mode == '6') {
            if (my_3dfractal->getLevel() < my_3dfractal->getMaxLevel()) {
                my_3dfractal->setLevel(my_3dfractal->getLevel() + 1); // Increase depth
            } else {
                increasing = false; // Reached max, start decreasing
            }
        } else if(!increasing == true && mode == '6') {
            if (my_3dfractal->getLevel() > 1) {
                  my_3dfractal->setLevel(my_3dfractal->getLevel() - 1); // Decrease depth
            } else {
                increasing = true; // Reset to start increasing on next play
            }
    }
     else if (increasing == true && mode == '7') {
            if (my_snowball->getLevel() < my_snowball->getMaxLevel()) {
                my_snowball->setLevel(my_snowball->getLevel() + 1); // Increase depth
            } else {
                increasing = false; // Reached max, start decreasing
            }
        } else if(!increasing == true && mode == '7') {
            if (my_snowball->getLevel() > 1) {
                  my_snowball->setLevel(my_snowball->getLevel() - 1); // Decrease depth
            } else {
                increasing = true; // Reset to start increasing on next play
            }
    }

     else if (increasing == true && mode == '8') {
            if (my_star->getLevel() < my_star->getMaxLevel()) {
                my_star->setLevel(my_star->getLevel() + 1); // Increase depth
            } else {
                increasing = false; // Reached max, start decreasing
            }
        } else if(!increasing == true && mode == '8') {
            if (my_star->getLevel() > 1) {
                  my_star->setLevel(my_star->getLevel() - 1); // Decrease depth
            } else {
                increasing = true; // Reset to start increasing on next play
            }
    }

        }

}
}

//--------------------------------------------------------------
void ofApp::draw() {
    ofBackgroundGradient(ofColor(65), ofColor(0), OF_GRADIENT_BAR);

    if (debugInfo) {
        ofSetColor(ofColor::white);
        drawDebugInfo();
    }

    ofNoFill();

    switch (mode) {
    case '1': {
        // Circle
        ofSetColor(ofColor::white);
        text.drawString(my_circle->getName(),25,60);
        fractal[0]->draw();
    
    } break;
    case '2': {
        // Tree
        ofSetColor(ofColor::white);
        text.drawString(my_tree->getName(),25,60);
        fractal[1]->draw();

    } break;
    case '3': {
        // Sierpinski Triangle
        ofSetColor(ofColor::white);
        text.drawString(my_triangle->getName(),25,60);
        fractal[2]->draw();
        
    } break;
    case '4': {
        // Barnsley Fern
        ofSetColor(ofColor::white);
        text.drawString(fern->getName(),25,60);
        fractal[3]->draw();
    }    break;
    case '5': {
        // Koch SnowFlake
        ofSetColor(ofColor::white);
        text.drawString(my_snowflake->getName(),25,60);
        fractal[4]->draw();

    }   break;
    case '6': {
        //3D Fractal
        ofSetColor(ofColor::white);
        text.drawString(my_3dfractal->getName(),25,60);

        limit = 9;
        min_limit = 0;

        fractal[6]->draw();
    }   break;
    case '7': {
        //Snowball Fractal
        ofSetColor(ofColor::white);
        text.drawString(my_snowball->getName(), 25, 60);
        fractal[5]->draw();
        break;
    }

    case '8': {
        //Star Fractal
        ofSetColor(ofColor::white);
        text.drawString(my_star->getName(), 25, 60);
        fractal[7]->draw();
        break;
    }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    if (key >= '1' && key <= '8'){
        mode = key;
    }

    switch (mode) {
    case '1':
        if ((key == OF_KEY_LEFT && my_circle->getLevel() > my_circle->getMinLevel()) || (key == OF_KEY_RIGHT && my_circle->getLevel() < my_circle->getMaxLevel())) {
            // Change level
            if (key == OF_KEY_RIGHT) {
                my_circle->setLevel(my_circle->getLevel() + 1);
            }
            if (key == OF_KEY_LEFT) {
                my_circle->setLevel(my_circle->getLevel() - 1);
            }
            
        }
        break;
    case '2':
        if ((key == OF_KEY_LEFT && my_tree->getLevel() > my_tree->getMinLevel()) || (key == OF_KEY_RIGHT && my_tree->getLevel() < my_tree->getMaxLevel())) {
             if (key == OF_KEY_RIGHT) {
                my_tree->setLevel(my_tree->getLevel() + 1);
            }
            if (key == OF_KEY_LEFT) {
                my_tree->setLevel(my_tree->getLevel() - 1);
            }
           
        }
        break;
    case '3':
        if ((key == OF_KEY_LEFT && my_triangle->getLevel() > my_triangle->getMinLevel()) || (key == OF_KEY_RIGHT && my_triangle->getLevel() < my_triangle->getMaxLevel())) {
            if (key == OF_KEY_RIGHT) {
                my_triangle->setLevel(my_triangle->getLevel() + 1);
            }
            if (key == OF_KEY_LEFT) {
                my_triangle->setLevel(my_triangle->getLevel() - 1);
            }
            
        }
        break;
    case '4':
        if ((key == OF_KEY_LEFT && fern->getLevel() > fern->getMinLevel()) || (key == OF_KEY_RIGHT && fern->getLevel() < fern->getMaxLevel())) {
            if (key == OF_KEY_RIGHT) {
                fern->setLevel(fern->getLevel() + 1);
            }
            if (key == OF_KEY_LEFT) {
                fern->setLevel(fern->getLevel() - 1);
            }
        }  
        break;
    case '5':
        if ((key == OF_KEY_LEFT && my_snowflake->getLevel() > my_snowflake->getMinLevel()) || (key == OF_KEY_RIGHT && my_snowflake->getLevel() < my_snowflake->getMaxLevel())) {
            if (key == OF_KEY_RIGHT) {
                my_snowflake->setLevel(my_snowflake->getLevel() + 1);
            }
            if (key == OF_KEY_LEFT) {
                my_snowflake->setLevel(my_snowflake->getLevel() - 1);
            }
            
        }
        break;
    case '6':
        if ((key == OF_KEY_LEFT && my_3dfractal->getLevel() > my_3dfractal->getMinLevel()) || (key == OF_KEY_RIGHT && my_3dfractal->getLevel() < my_3dfractal->getMaxLevel())) {
            if (key == OF_KEY_RIGHT) {
                my_3dfractal->setLevel(my_3dfractal->getLevel() + 1);
            }
            if (key == OF_KEY_LEFT) {
                my_3dfractal->setLevel(my_3dfractal->getLevel() - 1);
            }
        }
        break;
    case '7':
        if ((key == OF_KEY_LEFT && my_snowball->getLevel() > my_snowball->getMinLevel()) || (key == OF_KEY_RIGHT && my_snowball->getLevel() < my_snowball->getMaxLevel())) {
            if (key == OF_KEY_RIGHT) {
                my_snowball->setLevel(my_snowball->getLevel() + 1);
            }
            if (key == OF_KEY_LEFT) {
                my_snowball->setLevel(my_snowball->getLevel() - 1);
            }
        }
        break;
     case '8':
        if ((key == OF_KEY_LEFT && my_star->getLevel() > my_star->getMinLevel()) || (key == OF_KEY_RIGHT && my_star->getLevel() < my_star->getMaxLevel())) {
            if (key == OF_KEY_RIGHT) {
                my_star->setLevel(my_star->getLevel() + 1);
            }
            if (key == OF_KEY_LEFT) {
                my_star->setLevel(my_star->getLevel() - 1);
            }
        }
        break;
}  
    //Toggle for the debug info
    if (key == 'd') {
        if(!debugInfo) {
            debugInfo = true;
        }
        else {
            debugInfo = false;
        }
    }
    //Toggle for the animation
     if (key == ' ') {
        if(!play) {
            play = true;

        }
        else {
            play = false;
        }

    }

  
 

} 



//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {
}

//----------------------------------------------------------------
//Function for showing the debug info
void ofApp::drawDebugInfo() {
    dataText.drawString("1. Circle Level", 20, 140);
    dataText.drawString(to_string(float(my_circle->getLevel())), 210, 140);
    dataText.drawString("2. Tree Level", 20, 170);
    dataText.drawString(to_string(float(my_tree->getLevel())), 210, 170);
    dataText.drawString("3. Triangle Level", 20, 200);
    dataText.drawString(to_string(float(my_triangle->getLevel())), 210, 200);
    dataText.drawString("4. Barnsley Level", 20, 230);
    dataText.drawString(to_string(float(fern->getLevel())), 210, 230);
    dataText.drawString("5. Snowflake Level", 20, 260);
    dataText.drawString(to_string(float(my_snowflake->getLevel())), 210, 260);
    dataText.drawString("6. 3DFractal Level", 20, 300);
    dataText.drawString(to_string(float(my_3dfractal->getLevel())), 210, 300);
    dataText.drawString("7. Snowball Fractal Level", 20, 330);
    dataText.drawString(to_string(float(my_snowball->getLevel())), 210, 330);
    dataText.drawString("8. Star Fractal Level", 20, 360);
    dataText.drawString(to_string(float(my_star->getLevel())), 210, 360);
}

//Creating a function to push my fractals and creating the objects
void ofApp::PushFractals() {
    my_circle = new Circles("CircleFractal", 1, 3, 5);
    my_tree = new Tree("Tree Fractal", 1, 3, 15);
    my_triangle = new Triangle("Sierpinski Fractal", 1, 3, 10);
    fern = new Fern("BarnsleyFern", 1, 10, 15);
    my_snowflake = new SnowFlake();
    my_3dfractal = new Fractal3D("3D Fractal",1,3,9, &cam);
    my_snowball = new Snowball("Snowball Fractal", 1, 3, 7);
    my_star= new Star("Shooting Star Fractal", 1, 3, 7);

    

    fractal.push_back(my_circle);
    fractal.push_back(my_tree);
    fractal.push_back(my_triangle);
    fractal.push_back(fern);
    fractal.push_back(my_snowflake);
    fractal.push_back(my_snowball);
    fractal.push_back(my_3dfractal);
    fractal.push_back(my_star);
}
