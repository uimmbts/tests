#ifndef POINT_H
#define POINT_H



class Point{
  int x;
  int y;
  public:
    Point(int, int);
    void deplace(int, int);
    void affiche();
};

#endif
