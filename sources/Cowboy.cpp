#include "Character.hpp"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace ariel;
using namespace std;

Cowboy::Cowboy(string name, Point location): Character(name, location){}

void Cowboy::shoot( Character* enemy){

}

bool Cowboy::hasBoolets(){
    return true;
}

void Cowboy::reload(){

}
