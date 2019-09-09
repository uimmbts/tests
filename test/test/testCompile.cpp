// example about structures
#include <iostream>
//using namespace std;

void ecrire(int*, int);
void affiche1(int[]);
void affiche2(int*);
void affiche3(int*);

int main(){
        const int taille(3);
        int tab[taille];
        

        std::cout << "@tab dans main : " << tab <<'\n';


        ecrire(tab, taille);
        affiche1(tab);

        //affiche2(ptr);
        //affiche3(ptr);
}


void ecrire(int *tab, int taille){
    std::cout << "@tab dans ecrire : " << tab <<'\n';
  for (int i = 0; i < taille; i++, tab++) {
          std::cout << "Donner la  de tab[" << i << "] : ";
          std::cin >> *(tab);
  }
}

void affiche1(int tab[]){
        std::cout << "@tab dans affiche1 : " << tab <<'\n';
        std::cout << "Dans affiche1" << '\n';
        for (int i = 0; i < 3; i++) {
                std::cout << "La valeur de tab[" << i << "] = " << tab[i] << std::endl;
        }
}

void affiche2(int* ptr){
        std::cout << "Dans affiche2" << '\n';
        for (int i = 0; i < 3; i++) {
                std::cout << "La valeur de tab[" << i << "] = " << *(ptr + i) << std::endl;
        }
}


void affiche3(int* ptr){
        std::cout << "Dans affiche3" << '\n';
        for (int i = 0; i < 3; i++, ptr++) {
                std::cout << "La valeur de tab[" << i << "] = " << *(ptr) << std::endl;
        }
}
