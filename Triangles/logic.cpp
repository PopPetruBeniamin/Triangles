/*
- Identificarea entitatilor situate [complet] in cadranul 1 de pe cercul geometric
- Identificarea celei mai lungi secvente de entitati egale
*/

#include "Triunghi.h"

Triunghi maximTriunghi(int lungime, Triunghi T[]) {
    Triunghi maxim = T[0];
    for(int i=0; i<lungime; i++){
        if(T[i] > maxim)
            maxim = T[i];
    }
    return maxim;
}

Triunghi* triunghiuriCadran1(int lungime, Triunghi T[], int& k) {
    auto* t_cadran1 = new Triunghi[100];
    for(int i = 0 ; i < lungime ; i++){
        if(T[i].getPunctA().getCadran() == 1 && T[i].getPunctB().getCadran() == 1 && T[i].getPunctC().getCadran() == 1){
            t_cadran1[k] = T[i];
            k++;
        }
    }
    return t_cadran1;
}

void secventaTriunghiuriEgale(int lungime, Triunghi T[], int& maxStart, int& maxEnd){
    int start = 0, end;
    for(int i = 1 ; i < lungime ; i++){
        if(T[i] == T[i-1]){
            end = i;
            if(end - start > maxEnd - maxStart){
                maxStart = start;
                maxEnd = end;
            }
        }
        else
            start = i;
    }
}
