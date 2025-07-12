#pragma once
#define WORDDISPLAY_H

#include <string>

class WordDisplay {
public:
    std::string createHint(const std::string& userGuess, const std::string& secretWord) const;
};

