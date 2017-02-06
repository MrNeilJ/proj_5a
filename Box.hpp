//
// Created by Neil Johnson on 2/5/17.
//

#ifndef PROJ_5A_BOX_HPP
#define PROJ_5A_BOX_HPP

// Write a class called Box that has three double fields called height, width and length.
// The class should have set methods for each field.  It should have a three-parameter
// constructor that takes three doubles and passes them to the set methods to initialize
// the fields of the Box.  It should have a default constructor that uses the set methods
// to initialize each field to 1.  It should have a method that calculates and returns the
// volume of the Box and a method that calculates and returns the surface area of the Box.


class Box {

private:
    int height;
    int width;
    int volume;

public:
    Box()
    {
        height = 1;
        width = 1;
        volume = 1;
    }
    bool setHeight(double);

    bool setWidth(double);

    bool setLength(double);

    double getVolume();

    double getSurfaceArea();

};


#endif //PROJ_5A_BOX_HPP
