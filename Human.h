#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
    public:
        Human(std::string name);
        Move* makeMove();
        std::string getName();
    private:
        std::string name;
};

#endif