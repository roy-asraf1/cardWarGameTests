#include "card.hpp"
#include <iostream>

using namespace std;
using namespace ariel;

card::card(int val, string shape) {
    this->val = val;
    this->shape = shape;
}

void card::setVal(int val) {
    this->val = val;
}

int card::getVal() const{
    return val;
}

string card::getShape() {
    return this->shape;
}

void card::setShape(string shape) {
    this->shape = shape;
}

void card::printCard() {
    cout << this->val << " , " << this->shape << endl;
}
