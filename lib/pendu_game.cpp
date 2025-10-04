// Détail de la librairie du jeu du pendu
// @author: Yassine B.

#include "pendu_game.hpp"
#include <iostream>
#include <string>
#include <print>


std::string askFirstWord() {
    std::string word;
    std::println("Joueur 1, veuillez rentrer un mot à faire deviner puis donner la main au joueur 2");
    std::cin >> word;

    for(int i=0; i<20; i++) std::println("");

    return word;
}

void welcome(int number_of_error) {
    std::println("Bienvenue dans le jeu du pendu");
    std::println("Voici l'explication des règles du jeu");
    std::println("Le jeu se joue à deux joueurs.\n");
    std::println("Le joueur 1 choisi un mot");
    std::println("Le joueur 2 quant à lui doit deviner le mot lettre par lettre.");
    std::println("Au bout de {} erreurs, la partie est finie\n", number_of_error);
    std::println("QUE LA PARTIE COMMENCE !\n\n");
}

int game(std::string word) {
    std::string word_lower = tolower(word);
    int length_word=word.length();
    char 
}