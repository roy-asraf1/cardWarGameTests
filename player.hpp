
// header of class player
# include <stdexcept>
# include <string>
# include <iostream>
# include <stack>
# include <vector>

using namespace std;

class Player{


private:
    string name;
    std::stack<Card, std::vector<Card>> my_stack;
    
public:
    Player(string name);

    void cardesTaken();
    Player stacksize();

};







