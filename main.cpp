#include "Box.hpp"

int main() {
    Box box1(2.4, 7.1, 5.0);
    Box box2;
    double volume1 = box1.getVolume();
    double surfaceArea1 = box1.getSurfaceArea();
    double volume2 = box2.getVolume();
    double surfaceArea2 = box2.getSurfaceArea();
}