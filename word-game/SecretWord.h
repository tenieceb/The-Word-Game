#pragma once
#include <string>
#include <vector>

class SecretWord {
private:
    std::vector<std::string> wordList;

public:
    SecretWord();
    std::string getRandomWord() const;
};