#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual std::string getName() const = 0;
    virtual ~Move() {}
};

class Rock : public Move {
public:
    std::string getName() const override;
};

class Paper : public Move {
public:
    std::string getName() const override;
};

class Scissors : public Move {
public:
    std::string getName() const override;
};

class Robot : public Move {
public:
    std::string getName() const override;
};

class Monkey : public Move {
public:
    std::string getName() const override;
};

class Pirate : public Move {
public:
    std::string getName() const override;
};

class Ninja : public Move {
public:
    std::string getName() const override;
};

class Zombie : public Move {
public:
    std::string getName() const override;
};

#endif // MOVE_H