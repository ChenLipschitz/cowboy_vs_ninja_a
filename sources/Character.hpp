#pragma once
#include "Point.hpp";
#include <iostream>

using namespace std;
namespace ariel{

    class Character{
        
        public:
        Character();
        Character(Point location_, int hit_, string name_);
        bool isAlive();
        double distance(Character &other);
        int getHit();
        void hit(int num);
        string getName();
        Point getLocation();
        void print();
        

        private:
        Point location;
        int score;
        string name;
    };
}