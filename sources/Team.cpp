#include "Character.hpp"
#include "Team.hpp"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace ariel;
using namespace std;

Team::Team(Character* captain_){
    this->captain = *captain_;
}
