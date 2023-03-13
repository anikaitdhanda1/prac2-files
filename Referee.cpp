#include "Referee.h"
#include "Player.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    // Get the moves from each player
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    // Determine the winner based on the moves
    Player* winner;
    if (*move1 > *move2) {
        winner = player1;
    } else if (*move2 > *move1) {
        winner = player2;
    } else {
        winner = nullptr;
    }

    // Delete the moves to free up memory
    delete move1;
    delete move2;

    // Return the winner
    return winner;
}