#include <iostream>
#include "stack.h"

namespace Stack {
  const int max_size = 200;
  char v[max_size];
  int top = 0;
}

void Stack::push(char c){
  std::cout << "j'ai poussé " << c << '\n' << std::endl;

}


char Stack::pop(){
  std::cout << "j'ai retiré un élément" << std::endl;

  return 'c';
}
