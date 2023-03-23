# include "player.hpp"
# include <iostream>
# include <string>
# include <stack>
# include <vector>
using namespace std;

class Player {
public:
    string name;
    std::stack<int, std::vector<int>> my_stack;
    

public:
    
    Player(string name);
    //FUNCTION OF PLAYER:
    void cardesTaken(vector<int> my_stack);
    int stacksize();
};

Player::Player(string name) {
    this->name = name;
    this->my_stack = my_stack;
}

void Player::cardesTaken(vector<int> a) {
    cout<<"cardes taken"<<endl;
}

int Player::stacksize() {
    cout<<"stack size:"<<endl;
    return my_stack.size;
}
