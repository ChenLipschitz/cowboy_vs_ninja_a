#include "Character.hpp"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace ariel;
using namespace std;

//-------------------------- constructor --------------------------//

Cowboy::Cowboy(string name, Point location) : Character(name, location, 110) {
    this->num_of_bullets = 6; // start with 6 bullets
}

//-------------------------- class methods --------------------------//

void Cowboy::shoot(Character* enemy) {}
bool Cowboy::hasboolets() const{
    return this->num_of_bullets > 0;
}
void Cowboy::reload() {}
string Cowboy::print() const{
    return "";
}
