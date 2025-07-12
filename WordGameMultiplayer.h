#pragma once
#include "WordGame.h"

class WordGameMultiplayer : public WordGame {
    public:
        WordGameMultiplayer(int maxTries = 6); 
        void play() override; 
};
