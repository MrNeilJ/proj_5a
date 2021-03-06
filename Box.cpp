/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.5.2017
 *
 * Description: This file contains all the functions for the
 * Box Class.  In here we can set the values of the height
 * width and length and of the object.  In addition the object
 * can return the volume and surface area of the "Box" object
**************************************************************/
#include "Box.hpp"


/**************************************************************
 *                  Box::Box
 * Description: Constructor in case the user doesn't put
 * anything in.
**************************************************************/
Box::Box()
{
    height = 1;
    width = 1;
    length = 1;
}

/**************************************************************
 *                   Box::Box
 * Description: Sets object information if the user adds in
 * values when creating the object
**************************************************************/
Box::Box(double w, double h, double l)
{
    width = w;
    height = h;
    length = l;
}

/**************************************************************
 *                   Box::setHeight
 * Description: Sets the private value "Height" in the Box
 * class
**************************************************************/
void Box::setHeight(double h) {
    height = h;
}

/**************************************************************
 *                   Box::setWidth
 * Description: Sets the private value "Width" in the Box
 * class.
**************************************************************/
void Box::setWidth(double w) {
    width = w;
}

/**************************************************************
 *                   Box::setLength
 * Description: Sets the private value "Length" in the Box
 * class.
**************************************************************/
void Box::setLength(double l) {
    length = l;
}

/**************************************************************
 *                   Box::getVolume
 * Description: Returns the value of the height, width, and
 * volume multiplied together.
**************************************************************/
double Box::getVolume() {
    return height * width * length;
}

/**************************************************************
 *                   Box::getSurfaceArea
 * Description: Returns the surface area of the cube, which is
 * the height * width multiplied by number of sides (6)
**************************************************************/
//
double Box::getSurfaceArea() {
    return (height * width) * 6;
}

