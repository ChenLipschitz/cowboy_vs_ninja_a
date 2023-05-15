#include "Character.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;
using namespace ariel;

Ninja::Ninja (string name_, Point location_) : Character(name_, location_){
}

void Ninja::move(Character* enemy){

}

void Ninja::slash(Character* enemy){
    if (!isAlive()){
        throw std::runtime_error("Error- the ninja is not alive");
    }
}