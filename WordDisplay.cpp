#include "WordDisplay.h"
#include <cctype>
#include <string>

std::string WordDisplay::createHint(const std::string& userGuess, const std::string& secretWord) const {
    std::string hint = "";

    for (size_t i = 0; i < userGuess.size(); ++i) {
        if (userGuess[i] == secretWord[i]) {
            hint += std::toupper(userGuess[i]);
        }
        else if (secretWord.find(userGuess[i]) != std::string::npos) {
            hint += std::tolower(userGuess[i]);
        }
        else {
            hint += "_";
        }
    }

    return hint;
}
