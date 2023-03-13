#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"

class Player {
public:
    virtual Move* makeMove() = 0;
    virtual std::string getName() const = 0;
    virtual ~Player() {}
};

class Human : public Player {
public:
    Human(const std::string& name);
    Move* makeMove() override;
    std::string getName() const override;
private:
    std::string name_;
};

class Computer : public Player {
public:
    Computer(const std::string& name);
    Move* makeMove() override;
    std::string getName() const override;
private:
    std::string name_;
};

#endif // PLAYER_H
