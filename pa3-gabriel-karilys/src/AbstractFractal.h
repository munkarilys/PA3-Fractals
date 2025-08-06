#pragma once
#include "Fractal.h"


class AbstractFractal : public Fractal {
protected:
    string name;

public:
    // Default constructor
    AbstractFractal() {}
    // Constructor to initialize common properties
    AbstractFractal(string name)  {
        this->name = name;

    }

    // Implemented methods from Fractal interface
    virtual void draw() = 0;

    virtual string getName() {
        return name;
    }

    // Additional common methods for fractals
    virtual void setName(string newName) {
        name = newName;
    }
};
