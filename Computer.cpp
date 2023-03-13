#include "Computer.h"
#include "Move.h"
#include <cstdlib>
#include <ctime>

Computer::Computer(string name) : Player(name) {}

Move* Computer::makeMove() {
    // Generate a random number between 1 and 5
    int random = (rand() % 5) + 1;

    // Use the random number to select a move
    switch (random) {
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
        default:
            return new Rock();
    }
}