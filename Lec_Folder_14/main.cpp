#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <cmath>
#include <cstring>
// #include "Constants.h"
#include "Geometry.h"

using namespace std;

int main(){

    double radius = 10;
    double height = 10;
    double length = 10;
    double width = 10;

    // declare objects

    // Right_rectangular_Pyramid(base_length, base_width, base_height)
    Cylinder cylinder1(radius, height);
    Sphere sphere1(radius);
    Cube cube1(length);
    Right_rectangular_Pyramid pyramid1(length,width, height);




    cout << "cylinder volume : " << cylinder1.volume() << endl;
    cout << "cylinder area : " << cylinder1.area() << endl;

    cout << "sphere volume : " << sphere1.volume() << endl;
    cout << "sphere area : " << sphere1.area() << endl;

    cout << "cube volume : " << cube1.volume() << endl;
    cout << "cube area : " << cube1.area() << endl;

    cout << "pyramid volume : " << pyramid1.volume() << endl;
    cout << "pyramid area : " << pyramid1.area() << endl;

    // Modify our object
    cylinder1.set_base_radius(100);
    cylinder1.set_height(10);

    cout << "cylinder volume : " << cylinder1.volume() << endl;
    cout << "cylinder area : " << cylinder1.area() << endl;

    return 0;
}