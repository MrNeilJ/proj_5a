/**************************************************************
** Author: Neil Johnson
**
** Date: 2.5.2017
**
** Description: This program will ask the user for an amount
** of integers they would like to enter.  The application then
** will allow the user to enter that many numbers.  Once
** completed it will display the largest and smallest numbers
** that the user typed in.
**************************************************************/


#include "Box.hpp"

int main() {

    // These are the tests that were provided by the example for the HW
    Box box1(2.4, 7.1, 5.0);
    Box box2;
    double volume1 = box1.getVolume();
    double surfaceArea1 = box1.getSurfaceArea();
    double volume2 = box2.getVolume();
    double surfaceArea2 = box2.getSurfaceArea();
}