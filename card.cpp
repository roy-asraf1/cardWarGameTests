#include "card.hpp"
# include <string>

class Card {
public:
    int val;
    string shape;
    

public:
    
    Card(int val, string shape);

    void cardesTaken();
    void stacksize();
};

Card::Card(int val, string shape) {
    this->val = val;
    this->shape = shape;
}

