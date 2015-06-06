#include "Rectangle.h"
using namespace std;

Rectangle2D::Rectangle2D(){
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}//creates default rectangle with (x,y) --> (0,0) and 1 for both width and height

Rectangle2D::Rectangle2D(double x, double y, double width, double height){
    this-> x = x;
    this-> y = y;
    this-> width = width;
    this-> height = height;
    
}//creates a rectangle

double Rectangle2D:: getX() const{
    return x;
}

double Rectangle2D:: getY() const{
    return y;
}

void Rectangle2D:: setX(double x){
    this-> x = x;
}

void Rectangle2D:: setY(double y){
    this-> y = y;
}

void Rectangle2D:: setWidth(double width){
    this-> width = width;
}

void Rectangle2D:: setHeight(double height){
    this-> height = height;
}

double Rectangle2D:: getWidth() const{
    return width;
}

double Rectangle2D:: getHeight() const{
    return height;
}

double Rectangle2D:: getArea() const{
    return width*height;
}//returns area of rectangle

double Rectangle2D:: getPerimeter() const{
    return 2*width+2*height;
}//returns perimeter of rectangle

bool Rectangle2D:: contains(double x, double y) const{
    if (x < (this->x + (.5*this->width)) && x > (this->x - (.5*this->width)) && y < (this->y + (.5*this->height)) && y > (this->y - (.5*this->height)))
        return true;
    else
        return false;
}//returns true if the specified point (x,y) is inside the rectangle

bool Rectangle2D:: contains(const Rectangle2D &r) const{
    if (x + width < r.x && y + height < r.y && x > r.x + r.width && y > r.y + r.height)
        return false;
    else
        return true;
}//returns true if the specified rectangle is inside this rectangle

bool Rectangle2D:: overlaps(const Rectangle2D &r) const{
    if (x + width < r.x || y + height < r.y || x > r.x + r.width || y > r.y + r.height)
        return false;
    else
        return true;
}//returns true if the specified rectangle overlaps with this rectangle
