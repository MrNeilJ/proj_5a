//
// Created by Neil Johnson on 2/5/17.
//

#include "Box.hpp"


// Sets the private value "Height" in the Box class
bool Box::setHeight(double h) {
    height = h;
    return true;
}

// Sets the private value "Width" in the Box class

bool Box::setWidth(double w) {
    width = w;
    return true;
}

// Sets the private value "Length" in the Box class
bool Box::setLength(double l) {
    length = l;
    return true;
}

// Returns the value of the height, width, and volume multiplied together
double Box::getVolume() {
    return height * width * length;

}

// Returns the surface area of the cube, which is the height * width
// Multiplied by number of sides
double Box::getSurfaceArea() {
    return (height * width) * 6;
}

