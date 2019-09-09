#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;


class Toto{
public:
  Toto(string name, int old):nom(name), age(old) {}
  void affiche();

private:
  string nom;
  int age;

};

void Toto::affiche(){
  cout << "Ton nom est : " << nom << endl;
  cout << "Ton age est : " << age << endl;

}

int main()
{
  int var(2);
  Toto toto("komo", 42);
  cout << "Hello world!" << endl;
  cout << "var = " << sqrt(var) << endl;
  toto.affiche();

  return 0;
}
