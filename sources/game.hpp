#ifndef GAME_H
#define GAME_H

# include <stdexcept>
# include <string>
# include <iostream>
# include <stack>
# include <vector>
# include "player.hpp"
# include "card.hpp"
using namespace std;

namespace ariel{
class Game
{

private:
    Player& p1;
    Player& p2;
    std::vector<card> deck;
    std::string winner;

public:
    Game(Player & p1,Player & p2);
    Game(const Game&);
    


    ~Game();

   void shuffleDeck();

    std::vector<card> getDeck();

    void createDeck();

    std::string getWinner();

    int getDeckSize();

    void printLastTurn() {
        std::cout << "printLastTurn" << std::endl;
    }

    void playAll() {
        std::cout << "playAll" << std::endl;
    }

    void playTurn() {
        std::cout << "playTurn" << std::endl;
    }

    void printWiner() {
        std::cout << "printWiner" << std::endl;
    }

    void printLog() {
        std::cout << "printLog" << std::endl;
    }

    void printStats() {
        std::cout << "printStats" << std::endl;
    }
};

}

#endif

