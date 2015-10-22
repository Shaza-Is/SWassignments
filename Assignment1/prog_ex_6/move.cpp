#include "move.h"
#include <iostream>

Move::Move(){}
Move::Move(double a, double b){
    x = a;
    y = b;
}
void Move::showmove() const{
    std::cout << "x= " << this->x <<std::endl;
    std::cout << "y= " << this->y <<std::endl;
}
Move Move::add(const Move & m) const{
    double c,d;
    c = x + m.x;
    d = y + m.y;
    return Move(c,d);

}
void Move::reset(double a, double b){
    a = 0;
    b = 0;
    x = a;
    y = b;
}
