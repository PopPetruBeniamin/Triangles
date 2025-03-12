#include "Triunghi.h"
#include "Punct.h"
#include <cmath>

Triunghi::Triunghi() {
    A = Punct(0, 0);
    B = Punct(0, 0);
    C = Punct(0, 0);
    lat_a = 0;
    lat_b = 0;
    lat_c = 0;
    perimetru = 0;
    aria = 0;
}



Triunghi::Triunghi(Punct punct_a, Punct punct_b, Punct punct_c) {
    A = punct_a;
    B = punct_b;
    C = punct_c;
    lat_a = std::sqrt((punct_b.getX() - punct_c.getX()) * (punct_b.getX() - punct_c.getX()) + (punct_b.getY() - punct_c.getY()) * (punct_b.getY() - punct_c.getY()));
    lat_b = std::sqrt((punct_c.getX() - punct_a.getX()) * (punct_c.getX() - punct_a.getX()) + (punct_c.getY() - punct_a.getY()) * (punct_c.getY() - punct_a.getY()));
    lat_c = std::sqrt((punct_a.getX() - punct_b.getX()) * (punct_a.getX() - punct_b.getX()) + (punct_a.getY() - punct_b.getY()) * (punct_a.getY() - punct_b.getY()));
    perimetru = lat_a + lat_b + lat_c;
    aria = std::sqrt(perimetru/2 * (perimetru/2 - lat_a) * (perimetru/2 - lat_b) * (perimetru/2 - lat_c));
}

//Terminar de hacer la clase de copia
Triunghi::Triunghi(const Triunghi& t) {
    A = t.A;
    B = t.B;
    C = t.C;
    lat_a = t.lat_a;
    lat_b = t.lat_b;
    lat_c = t.lat_c;
    perimetru = t.perimetru;
    aria = t.aria;
}


Triunghi::~Triunghi()= default;

float Triunghi::getPerimetru() {
    return perimetru;
}

float Triunghi::getAria() {
    return aria;
}

Punct Triunghi::getPunctA() {
    return A;
}

Punct Triunghi::getPunctB() {
    return B;
}

Punct Triunghi::getPunctC() {
    return C;
}

void Triunghi::setPunctA(const Punct& punct_a) {
    A = punct_a;
    recalculate();
}

void Triunghi::setPunctB(const Punct& punct_b) {
    B = punct_b;
    recalculate();
}

void Triunghi::setPunctC(const Punct& punct_c) {
    C = punct_c;
    recalculate();
}

void Triunghi::recalculate() {
    lat_a = std::sqrt((B.getX() - C.getX()) * (B.getX() - C.getX()) + (B.getY() - C.getY()) * (B.getY() - C.getY()));
    lat_b = std::sqrt((C.getX() - A.getX()) * (C.getX() - A.getX()) + (C.getY() - A.getY()) * (C.getY() - A.getY()));
    lat_c = std::sqrt((A.getX() - B.getX()) * (A.getX() - B.getX()) + (A.getY() - B.getY()) * (A.getY() - B.getY()));
    perimetru = lat_a + lat_b + lat_c;
    aria = std::sqrt(perimetru/2 * (perimetru/2 - lat_a) * (perimetru/2 - lat_b) * (perimetru/2 - lat_c));
}

bool Triunghi::operator<(const Triunghi& tRight) const {
    return (aria < tRight.aria);
}

bool Triunghi::operator>(const Triunghi& tRight) const {
    return (aria > tRight.aria);
}

bool Triunghi::operator==(const Triunghi& tRight) const {
    return (A == tRight.A && B == tRight.B && C == tRight.C);
}


std::ostream& operator<<(std::ostream &os, const Triunghi &t){
    os << "A =" << t.A << " B =" << t.B << " C =" << t.C << " Perimetru=" << t.perimetru << " Aria =" << t.aria << std::endl;
    return os;
}

std::istream& operator>>(std::istream &is, Triunghi &t){
    std::cout << "-------------Triunghi-------------" << std::endl;
    std::cout << "A: " << std::endl;is >> t.A;
    std::cout << "B: " << std::endl;is >> t.B;
    std::cout << "C: " << std::endl;is >> t.C;
    t.recalculate();
    return is;
}
