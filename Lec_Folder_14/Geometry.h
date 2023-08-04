#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <cmath>
#include <cstring>
#include "Constants.h"

using namespace std;


class Cylinder
{
public:
    // Constctors
    Cylinder() = default;
    Cylinder(double rad_param, double height_param)
    {
        base_radius = rad_param;
        height = height_param;
    }
    // Functions (methods)
    double volume()
    {
        return PI * base_radius * base_radius * height;
    }

    double area()
    {
        // 2πrh+2πr2
        return (2 * PI * base_radius * height) + (2 * PI * pow(base_radius, 2));
    }

    // Setter and getter methods
    double get_base_radius()
    {
        return base_radius;
    }
    double get_height()
    {
        return height;
    }

    void set_base_radius(double rad_param)
    {
        base_radius = rad_param;
    }

    void set_height(double height_param)
    {
        height = height_param;
    }

private:
    // Member variables
    double base_radius = 1;
    double height = 1;
};

class Sphere
{
public:
    // Constctors
    Sphere() = default;
    Sphere(double rad_param)
    {
        base_radius = rad_param;
    }
    // Functions (methods)
    double volume()
    {
        // (4/3) πr2
        return (4 / 3) * PI * pow(base_radius, 2);
    }

    double area()
    {
        // 4 πr2
        return (4) * PI * pow(base_radius, 2);
    }

    // Setter and getter methods
    double get_base_radius()
    {
        return base_radius;
    }

    void set_base_radius(double rad_param)
    {
        base_radius = rad_param;
    }

private:
    // Member variables
    double base_radius = 1;
};

class Cube
{
public:
    // Constctors
    Cube() = default;
    Cube(double length_param)
    {
        base_length = length_param;
    }
    // Functions (methods)
    double volume()
    {
        // (4/3) πr2
        return pow(base_length, 3);
    }

    double area()
    {
        // 4 πr2
        return (6) * pow(base_length, 2);
    }

    // Setter and getter methods
    double get_base_length()
    {
        return base_length;
    }

    void set_base_length(double length_param)
    {
        base_length = length_param;
    }

private:
    // Member variables
    double base_length = 1;
};

class Right_rectangular_Pyramid
{
public:
    // Constctors
    Right_rectangular_Pyramid() = default;

    // Right_rectangular_Pyramid(base_length, base_width, base_height)
    Right_rectangular_Pyramid(double length_param, double width_param, double height_param)
    {

        base_length = length_param;
        base_width = width_param;
        base_height = height_param;
    }
    // Functions (methods)
    double volume()
    {
        // lwh/3

        double vol = (base_length * base_width * base_height) / 3;

        return vol;
    }

    double area()
    {
        // 4 πr2

        double SA = (base_length * base_width) + (base_length * pow(pow(base_width / 2, 2) + pow(base_height, 2), (1 / 2))) +
                    (base_width * pow(pow(base_length / 2, 2) + pow(base_height, 2), (1 / 2)));

        return SA;
    }

    // Setter and getter methods
    double get_base_length()
    {
        return base_length;
    }

    void set_base_length(double length_param)
    {
        base_length = length_param;
    }

private:
    // Member variables
    double base_length = 1;
    double base_width = 1;
    double base_height = 1;
};
