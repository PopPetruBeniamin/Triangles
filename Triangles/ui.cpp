#include <iostream>
#include "Triunghi.h"
#include "logic.h"

void optiuni(){
    std::cout << "1. Citire lista Triunghiuri" << std::endl;
    std::cout << "2. Afisare lista Triunghiuri" << std::endl;
    std::cout << "3. Cel mai mare triunghi (in functie de arie)" << std::endl;
    std::cout << "4. Lista cu triunghiuri doar in cadranul 1" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "Alegeti o optiune:" << std::endl;
}

void optiune1_citire(int &lungime, Triunghi T[]){
    std::cout << "Lungime=";
    std::cin>>lungime;
    for(int i = 0 ; i < lungime ; i++)
        std::cin >> T[i];
}

void optiune2(int lungime, Triunghi T[]) {
    for (int i = 0; i < lungime; i++)
        std::cout << T[i];
    std::cout << std::endl;
}

void optiune3(int lungime, Triunghi T[]){
    int k = 0;
    Triunghi* t_cad;
    t_cad = triunghiuriCadran1(lungime, T, k);
    for(int i = 0 ; i < k ; i++)
        std::cout << t_cad[i];
    delete [] t_cad;
}

void optiune4(int lungime, Triunghi T[]){
    int maxStart = 0, maxEnd = 0;
    secventaTriunghiuriEgale(lungime, T, maxStart, maxEnd);
    std::cout << "Index start:" << maxStart << "\t Index end:" << maxEnd << std::endl;
}

void console() {
    int optiune, lungime=0;
    Triunghi lista[100];
    optiuni();
    std::cin >> optiune;
    do {
        if (optiune == 0) {
            break;
        }
        if (optiune == 1) {
            optiune1_citire(lungime, lista);
        }
        if (optiune == 2) {
            optiune2(lungime, lista);
        }
        if (optiune == 3) {
            Triunghi maxim = maximTriunghi(lungime, lista);
            std::cout << maxim << std::endl;
        }
        if (optiune == 4) {
            optiune3(lungime, lista);
        }
        if (optiune == 5){
            optiune4(lungime, lista);
        }
        optiuni();
        std::cin >> optiune;
    } while (optiune != 0);

}