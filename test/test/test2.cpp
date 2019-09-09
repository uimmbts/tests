#include <iostream>

using namespace std;

void raun(int[][15]);
int fct1(int, int);
int fct2(int, int);
int (*adf)(int, int);

void afficher(int (*f)(int a, int b));

int main(int argc, char const *argv[]) {

  adf = fct1;
  (*adf)(3, 2);
  cout << afficher(fct1(2,3)) << endl;
  adf = fct2;
  cout << (*adf) (2, 3) << endl;

  return 0;
}


int fct1(int x, int y){
  return x + y;
}

int fct2(int x, int y){
  return x - y;
}

void afficher(int (*f)(int a, int b)){
  cout << (*f) << endl;
}
