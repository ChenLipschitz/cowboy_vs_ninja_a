#include "Character.hpp"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace ariel;
using namespace std;


//-------------------------- constructors & initializations --------------------------//
Character::Character(){
    this->location = Point();
    this-> score = 0;
    this-> name = "";
}
Character::Character(string name_, Point location_){
    this->location = location_;
    this-> score = 0;
    this-> name = name_;
}

bool Character::isAlive(){
    return this-> score>0;
}

double Character::distance(Character &other){
    return 0.0;
}

int Character::getHit(){
    return this->score;
}

void Character::setHit(int num){
    this->score = num;
}

void Character::hit(int num){
    score = score-num;
}
        
string Character::getName(){
    return this->name;
}
        
Point Character::getLocation(){
    return this->location;
}

string Character::print(){
    cout<<"Name: "<< this->name <<endl;
    this->location.print();
    cout<<"Score: "<<this->score<<endl;
    return"";
}