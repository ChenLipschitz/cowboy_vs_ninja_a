#pragma once
#include "Character.hpp"
#include <iostream>
#include <string>

using namespace std;
namespace ariel{

    class Team{
        Team(Character* captain);
        ~Team();
        void add(Character* player);
        void atack(Team* enemy);
        int stillAlive();
        void print();

        private:
        Character captain; 
    };

    class Team2 : public Team{
        public:
        void print();       //override
    };
}