#ifndef LAB_5_TRIUNGHI_H
#define LAB_5_TRIUNGHI_H

#include "Punct.h"
#include <iostream>

class Triunghi{
private:
    Punct A;
    Punct B;
    Punct C;
    float lat_a;
    float lat_b;
    float lat_c;
    float perimetru;
    float aria;
    //void validare();

public:
    Triunghi();
    Triunghi(Punct a, Punct b, Punct c);
    Triunghi(const Triunghi& t);
    ~Triunghi();
    Punct getPunctA();
    Punct getPunctB();
    Punct getPunctC();
    float getPerimetru();
    float getAria();
    void setPunctA(const Punct& punct_a);
    void setPunctB(const Punct& punct_b);
    void setPunctC(const Punct& punct_c);
    void recalculate();

    bool operator<(const Triunghi&) const;
    bool operator>(const Triunghi&) const;
    bool operator==(const Triunghi&) const;
    friend std::ostream& operator<<(std::ostream &, const Triunghi &);
    friend std::istream& operator>>(std::istream &, Triunghi &);
};
#endif //LAB_5_TRIUNGHI_H
