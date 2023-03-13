#include "Player.h"
#include <iostream>

// Human class implementation
Human::Human(const std::string& name) : name_(name) {}

Move* Human::makeMove() {
    std::string input;
    std::cout << name_ << ", enter move: ";
    std::cin >> input;
    if (input == "Rock") {
        return new Rock();
    } else if (input == "Paper") {
        return new Paper();
    } else if (input == "Scissors") {
        return new Scissors();
    } else if (input == "Robot") {
        return new Robot();
    } else if (input == "Monkey") {
        return new Monkey();
    } else if (input == "Pirate") {
        return new Pirate();
    } else if (input == "Ninja") {
        return new Ninja();
    } else if (input == "Zombie") {
        return new Zombie();
    } else {
        std::cout << "Invalid move! Try again." << std::endl;
        return makeMove();
    }
}

std::string Human::getName() const {
    return name_;
}

// Computer class implementation
Computer::Computer(const std::string& name) : name_(name) {}

Move* Computer::makeMove() {
    int randNum = rand() % 8;
    switch (randNum) {
        case 0:
            return new Rock();
        case 1:
            return new Paper();
        case 2:
            return new Scissors();
        case 3:
            return new Robot();
        case 4:
            return new Monkey();
        case 5:
            return new Pirate();
        case 6:
            return new Ninja();
        case 7:
            return new Zombie();
    }
    return nullptr; // Should never get here
}

std::string Computer::getName() const {
    return name_;
}