#include "Point.hpp"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace ariel;
using namespace std;

//-------------------------- constructors --------------------------//
Point::Point(){
    //by default create 0
    this->x = 0.0;
    this->y = 0.0;
}

Point::Point(double x_, double y_){
    this->x = x_;
    this->y = y_;
}

//-------------------------- getters --------------------------//
double Point::getX() const{
    return this->x;
}
double Point::getY() const{
    return this->y;
}

void Point::print(){
    cout << "Point: \n(" << this->x << "," << this->y << ")" << endl;
}