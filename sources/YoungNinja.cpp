#include "Character.hpp"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace ariel;
using namespace std;

YoungNinja::YoungNinja(string name, Point location): Ninja(name, location){
    setSpeed(14);
    setHit(100);
}