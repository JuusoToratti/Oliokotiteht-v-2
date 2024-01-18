#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class Game {
private:
    int max_number;
    int player_guess;
    int random_number;
    int num_of_guesses;

public:
    Game(int max_number) : max_number(max_number), player_guess(0), num_of_guesses(0) {
        srand(static_cast<unsigned int>(time(nullptr)));
        random_number = rand() % max_number + 1;
        std::cout << "GAMECONSTRUCTOR: object initialized with  " << max_number << std::endl;
    }

    ~Game() {
        std::cout << "GAMEDESTRUCTOR: obeject cleared from stack memory" << std::endl;
    }

    void play() {
        std::cout << "Guess a number between 1 and " << max_number << std::endl;
        while (player_guess != random_number) {
            std::cout << "Enter your guess: ";
            std::cin >> player_guess;
            num_of_guesses++;

            if (player_guess < random_number) {
                std::cout << "Too low, try again." << std::endl;
            } else if (player_guess > random_number) {
                std::cout << "Too high, try again." << std::endl;
            }
        }
    }

    void print_game_result() {
        std::cout << "You guessed the correct number: " << random_number << "." << std::endl;
        std::cout << "Number of guesses: " << num_of_guesses << std::endl;
    }
};

#endif // GAME_H
