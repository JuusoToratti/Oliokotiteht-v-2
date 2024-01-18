#include "Game.h"

int main() {
    int max_number = 10;
    Game game(max_number);
    game.play();
    game.print_game_result();

    return 0;
}

