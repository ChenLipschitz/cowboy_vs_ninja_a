#include "Character.hpp"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace ariel;
using namespace std;

Character::Character(Point location_, int hit_, string name_){
    this->location = location_;
    this-> score = hit_;
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

void Character::hit(int num){
    score = score-num;
}
        
string Character::getName(){
    return this->name;
}
        
Point Character::getLocation(){
    return this->location;
}

void Character::print(){
    cout<<"Character-\nName: "<< this->name <<endl;
    this->location.print();
    cout<<"Score: "<<this->score<<endl;
}