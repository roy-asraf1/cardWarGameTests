#include "game.hpp"
#include "player.hpp"
#include "card.hpp"
#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;
using namespace  ariel;

Game::Game(Player& p1, Player& p2) : p1(p1), p2(p2) {
    winner = "";
}

Game::Game(const Game& game) : p1(game.p1), p2(game.p2) {
    winner = "";
}



Game::~Game() {
    cout << "destructor" << endl;
}

void Game::shuffleDeck() {
    // implement deck shuffling 
}

std::vector<card> Game::getDeck() {
    return deck;
}

void Game::createDeck() {
    deck.clear();
    for (int i = 1; i <= 13; i++) {
        deck.push_back(card(i, "hearts"));
        deck.push_back(card(i, "diamonds"));
        deck.push_back(card(i, "clubs"));
        deck.push_back(card(i, "spades"));
    }
}

std::string Game::getWinner() {
    return winner;
}

int Game::getDeckSize() {
    return deck.size();
}
