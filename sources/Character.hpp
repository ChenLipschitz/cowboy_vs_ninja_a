#pragma once
#include "Point.hpp";
#include <iostream>

using namespace std;
namespace ariel{

    class Character{
        
        public:
        Character();
        Character(string name_, Point location_);
        bool isAlive();
        double distance(Character &other);
        int getHit();
        void setHit(int num);
        void hit(int num);
        string getName();
        Point getLocation();
        virtual void print();
        

        private:
        Point location;
        int score;
        string name;
    };

    class Cowboy : public Character{

        public:
        Cowboy(string name, Point location);
        void shoot(Character* enemy);
        bool hasBoolets();
        void reload();

        private:
        int num_of_bullets;

    };

    class Ninja : public Character{

        public:
        Ninja(string name, Point location);
        void move(Character* enemy);
        void slash(Character* enemy);
        void setSpeed(int speed_);

        private:
        int speed;
    };

    class OldNinja : public Ninja{
        public:
        OldNinja(string name, Point location);
    };

     class TrainedNinja : public Ninja{
        public:
        TrainedNinja(string name, Point location);
    };

     class YoungNinja : public Ninja{
        public:
        YoungNinja(string name, Point location);
    };
}