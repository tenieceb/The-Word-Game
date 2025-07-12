#include "WordGameMultiplayer.h"

#include <iostream>

// Uses WordGame and WordDisplay classes to implement multiplayer game mechanics 
WordGameMultiplayer::WordGameMultiplayer(int maxTries)
    : WordGame(maxTries) 
{
    rulesText =
        "Two Player Mode!\n"
        "Player 1 sets a secret word.\n"
        "Player 2 must guess it in 6 tries.\n"
        "UPPERCASE letter: correct letter AND position.\n"
        "lowercase letter: correct letter BUT wrong position.\n";
}

void WordGameMultiplayer::play() {
    std::cout << rulesText << std::endl;
    std::cout << "Player 1, please enter the secret word: ";
    std::getline(std::cin, secretWord);
    std::cout << std::string(100, '\n');
    

    int attempts = 0;
    std::string userGuess(secretWord.size(), '_');
    std::cout << "Hint: " << userGuess << std::endl;
    



    while (attempts < maxAttempts) {
        std::cout << "Player 2, enter your guess: ";
        std::getline(std::cin, userGuess);

        if (!isValidLength(userGuess)) {
            std::cout << "Invalid guess! It must be "
                << secretWord.length() << " letters long.\n";
            continue;  
        }

        std::string hint = display.createHint(userGuess, secretWord);
        std::cout << "Hint: " << hint << std::endl;

        if (userGuess == secretWord) {
            std::cout << "Congratulations! Player 2 guessed the word!\n";
            return;
        }

        attempts++;
    }

    std::cout << "Sorry, you ran out of attempts. The word was: " << secretWord << std::endl;
}
