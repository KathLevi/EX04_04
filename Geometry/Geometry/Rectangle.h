#ifndef __Geometry__Rectangle__
#define __Geometry__Rectangle__

#include <stdio.h>
using namespace std;

class Rectangle2D{
public:
    Rectangle2D(); //creates default rectangle with (x,y) --> (0,0) and 1 for both width and height
    Rectangle2D(double x, double y, double width, double height); //creates a rectangle
    
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    void setWidth(double width);
    void setHeight(double height);
    double getWidth() const;
    double getHeight() const;
    double getArea() const; //returns area of rectangle
    double getPerimeter() const; //returns perimeter of rectangle
    bool contains(double x, double y) const; // returns true if the specified point (x,y) is inside the rectangle
    bool contains(const Rectangle2D &r) const; //returns true if the specified rectangle is inside this rectangle
    bool overlaps(const Rectangle2D &r) const; //returns true if the specified rectangle overlaps with this rectangle
    
private:
    double x;
    double y;
    double width;
    double height;
};


#endif /* defined(__Geometry__Rectangle__) */
