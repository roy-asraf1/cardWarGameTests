# include "player.hpp"
# include <stdexcept>
# include <string>
# include <iostream>
# include <stack>
# include <vector>
using namespace std;


static bool flag = false;// check if the game end

class Game
{

private:
    Player p1;
    Player p2;
    std::stack<Card, std::vector<Card>> Maincardpile; 

public:
    Game(Player p1,Player p2);
    

    void printLastTurn();
    void playAll();
    void playTurn();
    void printWiner(); // prints the name of the winning player
    void printLog(); // prints all the turns played one line per turn (same format as game.printLastTurn())
    void printStats();// for each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand. (draw within a draw counts as 2 draws. )
    
    bool checkMaincardpile(stack<Card, std::vector<Card>> Maincardpile);
};

