#include "Character.hpp"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;
using namespace ariel;

//-------------------------- Ninja --------------------------//
Ninja::Ninja (string name_, Point location_) : Character(name_, location_){
}

void Ninja::move(Character* enemy){

}

void Ninja::slash(Character* enemy){
    if (!isAlive()){
        throw std::runtime_error("Error- the ninja is not alive");
    }
}

void Ninja::setSpeed(int speed_){}

//-------------------------- YoungNinja --------------------------//
YoungNinja::YoungNinja(string name, Point location): Ninja(name, location){
    setSpeed(14);
    setHit(100);
}

//-------------------------- TrainedNinja --------------------------//
TrainedNinja::TrainedNinja(string name, Point location): Ninja(name, location){
    setSpeed(12);
    setHit(120);
}

void TrainedNinja::move(Character* enemy){}

//-------------------------- OldNinja --------------------------//
OldNinja::OldNinja(string name, Point location): Ninja(name, location){
    setSpeed(8);
    setHit(150);
}