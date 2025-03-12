#ifndef LAB_5_PUNCT_H
#define LAB_5_PUNCT_H

#include <iostream>

class Punct{
private:
    float x;
    float y;
    int cadran;
public:
    Punct();
    Punct(float a, float b);
    Punct(const Punct&);
    ~Punct();
    void setX(float a);
    void setY(float b);
    float getX();
    float getY();
    int getCadran() const;

    bool operator==(const Punct&) const;
    friend std::ostream& operator<<(std::ostream &, const Punct &);
    friend std::istream& operator>>(std::istream &, Punct &);
};
#endif //LAB_5_PUNCT_H
