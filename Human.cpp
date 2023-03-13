#include "Human.h"
#include <iostream>

using namespace std;

Human::Human(string name) {
    this->name = name;
}

string Human::getName() {
    return name;
}

Move* Human::makeMove() {
    string moveStr;
    cout << "Enter Move: ";
    cin >> moveStr;
    Move* move = new Move(moveStr);
    return move;
}