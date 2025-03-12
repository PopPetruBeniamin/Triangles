#include "Punct.h"

Punct::Punct(){
    x = 0;
    y = 0;
    cadran = getCadran();
}

Punct::Punct(float a, float b) {
    x = a;
    y = b;
    cadran = getCadran();
}

Punct::Punct(const Punct& p) {
    x = p.x;
    y = p.y;
    cadran = p.getCadran();
}

Punct::~Punct()= default;

void Punct::setX(float a) {
    x = a;
}

void Punct::setY(float b) {
    y = b;
}

float Punct::getX() {
    return x;
}

float Punct::getY() {
    return y;
}

int Punct::getCadran() const {
    if(x > 0 && y > 0) return 1;
    if(x < 0 && y > 0) return 2;
    if(x < 0 && y < 0) return 3;
    if(x > 0 && y < 0) return 4;
    return 0;
}

bool Punct::operator==(const Punct& punct_Right) const {
    return (x == punct_Right.x && y == punct_Right.y);
}

std::ostream& operator<<(std::ostream &os, const Punct &p){
    os << "(" << p.x << "," << p.y << ")";
    return os;
}

std::istream& operator>>(std::istream &is, Punct &p){
    std::cout << "x =";
    std::cin >> p.x;
    std::cout << "y =";
    std:: cin >> p.y;
    return is;
}
