#pragma once
#include "Point.hpp"
#include <iostream>

using namespace std;
namespace ariel{

    //-------------------------- Character --------------------------//
    class Character{
        
        public:
        Character();
        Character(string name_, Point location_);
        virtual ~Character() = default;
        bool isAlive();
        double distance(Character &other);
        int getHit();
        void setHit(int num);
        void hit(int num);
        string getName();
        Point getLocation();
        virtual string print();
        

        private:
        Point location;
        int score;
        string name;
    };

    //-------------------------- Cowboy --------------------------//
    class Cowboy : public Character{

        public:
        Cowboy(string name, Point location);
        ~Cowboy() override = default;
        void shoot(Character* enemy);
        bool hasBoolets();
        void reload();

        private:
        int num_of_bullets;

    };

    //-------------------------- Ninja --------------------------//
    class Ninja : public Character{

        public:
        Ninja(string name, Point location);
        ~Ninja() override = default;
        virtual void move(Character* enemy);
        void slash(Character* enemy);
        void setSpeed(int speed_);

        private:
        int speed;
    };

    //-------------------------- Different types of Ninjas --------------------------//
    class OldNinja : public Ninja{
        public:
        OldNinja(string name, Point location);
    };

     class TrainedNinja : public Ninja{
        public:
        TrainedNinja(string name, Point location);
        void move(Character* enemy) override;
    };

     class YoungNinja : public Ninja{
        public:
        YoungNinja(string name, Point location);
    };
}