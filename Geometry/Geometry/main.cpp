//////////////////////////
//Name: Kathleen Levi
//
//Project: EX04_04 (11.9)
//
//Date: May 26, 2015
//////////////////////////

//Dont forget to turn in the UML diagram

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle2D r1(2, 2, 5.5, 4.9);
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4);
    
    cout << "The area of r1 is " << r1.getArea() << endl;
    cout << "The perimeter of r1 is " << r1.getPerimeter() << endl;
    cout << "r1 contains the point (3, 3): " << r1.contains(3, 3) << endl;
    cout << "r1 contains r2: " << r1.contains(r2) <<endl;
    cout << "r1 overlaps r3: " << r1.overlaps(r3) <<endl;
    
}
