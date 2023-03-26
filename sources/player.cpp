#include "player.hpp"
#include <iostream>

using namespace std;
using namespace ariel;

Player::Player() : name("new_player") {
}
Player::Player(string name) : name(name) {
}

int Player::cardesTaken() {
    cout << "Cards taken" << endl;
    return 5;
}

int Player::stacksize() {
    return 26;
}
std::string Player::getName() {
    return name;
}

