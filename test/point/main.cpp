#include <iostream>
#include "main.h"



int main() {
        Point p1(0,0);
        Point p2(1,1);
        p1.affiche();
        p1.deplace(1, 1);
        p1.affiche();

        p2.affiche();
        p2.deplace(1, 1);
        p2.affiche();
        return 0;
}
