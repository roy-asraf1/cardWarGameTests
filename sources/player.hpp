#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <stdexcept>
#include <string>
#include <iostream>
#include <stack>
#include <vector>
#include "card.hpp"

using namespace std;
namespace ariel {

    class Player {
    private:
        std::string name;
        std::stack<card> stack;

    public:
        Player();
        Player(std::string name);
        int cardesTaken();
        int stacksize();
        std::string getName();
    };

}

#endif // PLAYER_HPP
