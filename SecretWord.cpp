#include "SecretWord.h"
#include <cstdlib>
#include <ctime>

// sets up the random seed and initializes the word list
SecretWord::SecretWord() {
    wordList = {
        "apple", "brick", "crane", "drape", "flute", "glide", "haste", "index",
        "joker", "knife", "lemon", "mango", "night", "ocean", "piano", "queen",
        "river", "solar", "table", "ultra", "vivid", "waltz", "xenon", "yacht",
        "zebra", "angle", "blaze", "crown", "dwarf", "eagle", "fancy", "grace",
        "honey", "irony", "jazzy", "karma", "lunar", "mirth", "nerve", "orbit",
        "pride", "quack", "risky", "spice", "tribe", "urban", "vigor", "whale",
        "xerox", "yield", "zesty"
    };
}

std::string SecretWord::getRandomWord() const {
    int index = std::rand() % wordList.size();
    return wordList[index];
}