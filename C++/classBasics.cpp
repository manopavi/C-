// Program - classBasics
// Author  - Manoj Prabhakar
// Date    - 18/12/2021

#include <iostream>                // Using IO function
#include <string>                  // Using string
using namespace std;

class Circle {                     // Class name
private:
    double radius_;                // Data members (variables)
    string color_;

public:                            
    // constructor to intialize member variable with default values
    Circle (double radius = 1.0, string color = "red") {

        radius_ = radius;
        color_  = color;
    }
    // Member function's definition 
    double getRadius() {

        return radius_;
    }
    double getArea() {

        return 3.14*radius_*radius_;
    }
    string getColor() {

        return color_;
    }
};

int main () {

// Construct a Circle instance
Circle c1(2.0,"Black");
cout << "Instance c1\nradius : " << c1.getRadius() << "\ncolor : " << c1.getColor() << "\nArea : " << c1.getArea();
 // Construct a Circle instance using default no-arg constructor
Circle c2;
cout << "\nInstance c2\nradius : " << c2.getRadius() << "\ncolor : " << c2.getColor() << "\nArea : " << c2.getArea();
// Construct a Circle instance with default color
Circle c3(3.0);
cout << "\nInstance c3\nradius : " << c3.getRadius() << "\ncolor : " << c3.getColor() << "\nArea : " << c3.getArea();
return 0;
}
        