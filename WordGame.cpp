#include "WordGame.h"
#include <iostream>

// Includes game rules and mechanics for the loop and gameplay
WordGame::WordGame(int maxTries)
    : maxAttempts(maxTries)
{
    secretWord = secret.getRandomWord();
    rulesText =
        "You have 6 guesses to get the word correct.\n"
        "UPPERCASE letter: correct letter AND position.\n"
        "lowercase letter: correct letter BUT wrong position.\n";
}

std::string WordGame::getRulesText() const {
    return rulesText;
}

void WordGame::play() {
    std::cout << rulesText << std::endl;
    int attempts = 0;
    std::string userGuess = "_____";
    std::cout << "Hint: " << userGuess << std::endl;

    while (attempts < maxAttempts) {
        std::cout << "Enter your guess: ";
        std::getline(std::cin, userGuess);

        if (!isValidLength(userGuess)) {
            std::cout << "Invalid guess! It must be "
                << secretWord.length() << " letters long.\n";
            continue;  
        }

        std::string hint = display.createHint(userGuess, secretWord);
        std::cout << "Hint: " << hint << std::endl;

        if (userGuess == secretWord) {
            std::cout << "Congratulations! You guessed the word!\n";
            return;
        }

        attempts++;
    }

    std::cout << "Sorry, you ran out of attempts. The word was: " << secretWord << std::endl;
}

bool WordGame::isValidLength(const std::string& guess) const {
    return guess.length() == secretWord.length();
}

