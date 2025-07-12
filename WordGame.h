#pragma once
#include "SecretWord.h"
#include "WordDisplay.h"
#include <string>


class WordGame{

    protected:
        SecretWord secret;
        WordDisplay display;
        std::string secretWord;
        int maxAttempts;
        std::string rulesText;
        bool isValidLength(const std::string& guess) const;

    public:
        WordGame(int maxAttempts = 6);
        virtual void play();
        std::string getRulesText() const;
        virtual ~WordGame(){}
};
