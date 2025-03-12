#include "Punct.h"
#include <cassert>
#include "Triunghi.h"
#include "logic.h"

//Testare Logica

void MyTestsPunct(){
    Punct p, p1(3, 4), p_copy(p1);
    Punct p2(5,-6), p3(5,-6);

    //Testam geterii pentru punct
    assert(p.getX() == 0);
    assert(p.getY() == 0);
    assert(p.getCadran() == 0);

    assert(p1.getX() == 3);
    assert(p1.getY() == 4);
    assert(p1.getCadran() == 1);

    assert(p_copy.getX() == 3);
    assert(p_copy.getY() == 4);
    assert(p_copy.getCadran() == 1);

    assert(p2.getX() == 5);
    assert(p2.getY() == -6);
    assert(p2.getCadran() == 4);

    assert(p3.getX() == 5);
    assert(p3.getY() == -6);
    assert(p3.getCadran() == 4);

    //Testam seterii pentru un punct
    p.setX(5);
    p.setY(11);
    p1.setX(0.5);
    p1.setY(7);

    assert(p.getX() == 5);
    assert(p.getY() == 11);
    assert(p.getCadran() == 1);

    assert(p1.getX() == 0.5);
    assert(p1.getY() == 7);
    assert(p1.getCadran() == 1);

    //Testam operatorul ==
    assert((p == p1) == 0);
    assert((p2 == p3) == 1);
    assert((p3 == p2) == 1);
    assert((p == p2) == 0);
    //std::cout << p;
    //std::cin >> p1;
    //std::cout << p1;
}

void MyTestsTriunghi(){
    Punct a(0, 0), b(4, 0), c(0, 3);
    Triunghi t, t_param(a, b, c), t_copy(t_param);

    //Testam geterii pentru arie si perimetru pentru triunghi fara parametrii
    //Testam geterii(ne returneaza un punct) intr-un triunghi
    assert(t.getPunctA() == Punct(0,0));
    assert(t.getPunctB() == Punct(0,0));
    assert(t.getPunctC() == Punct(0,0));
    assert(t.getPerimetru() == 0);
    assert(t.getAria() == 0);

    //Testam geterii pentru arie si perimatru pentru triunghi cu parametrii
    //Testam geterii intr-un triunghi
    assert(t_param.getPunctA() == Punct(0,0));
    assert(t_param.getPunctB() == Punct(4,0));
    assert(t_param.getPunctC() == Punct(0,3));
    assert(t_param.getPerimetru() == 12);
    assert(t_param.getAria() == 6);


    //Testam geterii pentru arie si perimatru pentru triunghi copie
    //Testam geterii(ne returneaza un punct) intr-un triunghi
    assert(t_copy.getPunctA() == Punct(0,0));
    assert(t_copy.getPunctB() == Punct(4,0));
    assert(t_copy.getPunctC() == Punct(0,3));
    assert(t_copy.getPerimetru() == 12);
    assert(t_copy.getAria() == 6);


    //Testam seterii(setam puncte) intr-un triunghi
    t.setPunctA(Punct(0,0));
    t.setPunctB(Punct(0,5));
    t.setPunctC(Punct(12, 0));
    assert(t.getPunctA() == Punct(0,0));
    assert(t.getPunctB() == Punct(0,5));
    assert(t.getPunctC() == Punct(12,0));
    assert(t.getPerimetru() == 30);
    assert(t.getAria() == 30);

    //Testam operatorii de comparare ==, <, >
    assert(t > t_copy == 1);
    assert(t_copy < t == 1);
    assert((t_copy == t_param) == 1);
    assert((t_copy == t) == 0);
}

void MyTestLogic(){
    int len = 4;
    int k = 0;

    //I built the array where I put my triangules
    Punct a(1,3), b(3,1),c(0,0);
    Punct a1(0,5),b1(5,0), c1(0,0);
    Punct a2(0,5),b2(5,0), c2(0,0);
    Punct a3(1,5),b3(5,1), c3(1,1);
    Triunghi t(a,b,c), t1(a1,b1,c1), t2(a2,b2,c2),t3(a3,b3,c3);
    Triunghi T[4] = {t,t1,t2,t3};

    //Test for funtion maximTriunghi
    assert(maximTriunghi(len,T) == Triunghi(Punct(0,5),Punct(5,0),Punct(0,0)));

    //Test for function triunghiCadran1
    Triunghi* Tcadran1;
    Tcadran1 = triunghiuriCadran1(len, T, k);
    assert(Tcadran1[0] == Triunghi(a3,b3,c3));
    assert(k == 1);
    delete [] Tcadran1;

    //Test for function secventaTringhiuriEgale()
    int maxS=0, maxE=0;
    secventaTriunghiuriEgale(len,T,maxS,maxE);
    assert(maxS == 1);
    assert(maxE == 2);
}
