#pragma once

#include "ofMain.h"
#include "AbstractFractal.h"

using namespace glm;

class Fractal3D : public AbstractFractal{
    private:
        ofMesh mesh;
        ofEasyCam* cam;
        bool currentMeshHasDetail = false;
        bool extrudeAllFaces = false;
        int limit;
        int min_limit;
        int fractal_level;
        string name;
    public:
        //Fractal3D(ofEasyCam* cam);
        Fractal3D(string name, int min_level, int actual_level, int max_level, ofEasyCam* cam);
        ~Fractal3D();

        vec3 centerOf(vector<vec3>& points);

        void draw();
        void draw(map<string, float>);
        void generateTetrahedron(vector<vec3>& base, vec3 peak, int n);
        void reset();
        map<string, float> getDefaultConfig();
        void toggleDetail();

        void setLevel(int level) { fractal_level = level;}
        int getLevel() {return fractal_level;}
        int getMinLevel() {return min_limit;}
        int getMaxLevel() {return limit;}
};