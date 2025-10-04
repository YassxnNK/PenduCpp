// Jeu du pendu
// @author Yassine B.

#include "lib/pendu_game.hpp"
#include <iostream>
#include <string>
#include <print>

const int NUMBER_OF_ERROR=10;

int main() {
    std::string word;

    welcome(NUMBER_OF_ERROR);
    word=askFirstWord();
    

    return 0;
}