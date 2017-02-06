/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.5.2017
 *
 * Description: This is the header file for the Box Class.
 * The file hosts the prototypes for the class functions
 * to run effectively.
 *************************************************************/

#ifndef PROJ_5A_BOX_HPP
#define PROJ_5A_BOX_HPP

class Box {

private:
    double height;
    double width;
    double length;

public:
    // Constructor in case the user doesn't put anything in.
    Box()
    {
        height = 1;
        width = 1;
        length = 1;
    }

    Box(double w, double h , double l);

    // Sets the private value Height
    bool setHeight(double h);

    // Sets the private value width
    bool setWidth(double w);

    // Sets the private value length
    bool setLength(double l);

    // Returns the volume of object l * h * w
    double getVolume();

    // Returns the surface area (w * h) * 6
    double getSurfaceArea();

};


#endif //PROJ_5A_BOX_HPP
