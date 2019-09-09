#include <iostream>

using namespace std;

float somme(float a, float b);

int main(int argc, char const *argv[]) {
        double poids(75);
        double taille(1.74);
        double imc(0.0);

        cout << "Entrez un poids (en kg) : ";
        cin >> poids;
        cout << "Entrez une taille (en m) : ";
        cin >> taille;

        imc = poids/(taille * taille);

        cout << "Pour " << poids
             << " kg et " << taille
             << " m, l'IMC est de " << imc
             << endl;

             
             printf("la somme est égale à : %.2f\n", somme(1.2, 3.4));
        return 0;
}

float somme(float a, float b){
  return a + b;
}
