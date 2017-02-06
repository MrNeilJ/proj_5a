/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.5.2017
 *
 * Description: This is the main function to test the the
 * created object class Box. The included tests are from the
 * assignment guideline.
**************************************************************/


#include "Box.hpp"

int main() {

    // These are the tests that were provided by the example for the HW
    Box box1(2.4, 7.1, 5.0);
    Box box2;
    // Added a box for self testing
    Box boxTest;
    double volume1 = box1.getVolume();
    double surfaceArea1 = box1.getSurfaceArea();
    double volume2 = box2.getVolume();
    double surfaceArea2 = box2.getSurfaceArea();
}