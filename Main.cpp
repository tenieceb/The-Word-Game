#include "WordGame.h"
#include "WordGameMultiplayer.h"
#include <iostream>

// Main function to run the Word Game
int main() {
    std::string begin;
    char mode;
    std::srand(std::time(nullptr));

    std::cout << "Welcome to The Word Game!\n";

    do {
        std::cout << "Choose game mode:\n";
        std::cout << "1. Single Player\n";
        std::cout << "2. Two Player\n";
        std::cout << "Enter choice (1 or 2): ";
        std::cin >> mode;
        std::cin.ignore();

        WordGame* game = nullptr;

        if (mode == '1') {
            game = new WordGame();
        }
        else if (mode == '2') {
            game = new WordGameMultiplayer();
        }
        else {
            std::cout << "Invalid choice.\n";
            continue;
        }

        game->play();
        delete game;

        std::cout << "Do you want to play again? Y or N: ";
        std::getline(std::cin, begin);

    } while (toupper(begin[0]) == 'Y');

    std::cout << "See you next time!\n";
    return 0;
}

