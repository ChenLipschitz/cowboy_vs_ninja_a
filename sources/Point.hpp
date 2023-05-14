#pragma once
#include <iostream>

using namespace std;
namespace ariel{

    class Point{
        
        public:
        Point();
        Point (double x, double y);
        double getX() const;
        double getY() const;
        void print();
        double distance(const Point &other);
        Point moveTowards(double dist);


        private:
        double x;
        double y;

    };
}