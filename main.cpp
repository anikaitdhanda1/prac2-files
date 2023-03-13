#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    // Seed the random number generator for the computer player
    srand(time(nullptr));

    // Create the players
    Human* player1 = new Human("Player 1");
    Computer* player2 = new Computer("Computer");

    // Create the referee
    Referee referee;

    // Get the winner from the referee
    Player* winner = referee.refGame(player1, player2);

    // Output the winner's name
    if (winner == nullptr) {
        std::cout << "It's a tie!" << std::endl;
    } else {
        std::cout << "The winner is " << winner->getName() << std::endl;
    }

    // Clean up memory
    delete player1;
    delete player2;

    return 0;
}