#include <iostream>
#include "Point.h"

using namespace std;

/*----------------- Définition des fonctions membres de la classe point -----*/

Point::Point(int abs, int ord){
        x = abs;
        y = ord;
}

void Point::deplace(int dx, int dy){
        x = x + dx;
        y = y + dy;
}

void Point::affiche(){
        cout << "Je suis en  (" << x << ", " << y << ")\n";
}
