#include "WordGame.h"
#include "WordGameMultiplayer.h"
#include <iostream>

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



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
