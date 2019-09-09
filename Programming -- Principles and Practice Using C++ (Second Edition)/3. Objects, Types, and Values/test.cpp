#include <iostream>
using namespace std;


class Point{

public:
  Point(double abs = 0, double ord = 0){
    x = abs;
    y = ord;
    cout << "Constructeur init." << endl;
  }

  Point(Point const&){
    cout << "Constructeur copier" << endl;
  }

  Point symetrie(){
    return Point(-x, -y);
  }

  void affiche(){
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
  }

private:
  double x;
  double y;

};


int main(int argc, char const *argv[]) {
  Point pt(1, 2);
  pt.affiche();
  pt.symetrie().affiche();
  

  return 0;
}
