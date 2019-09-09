#include <iostream>
#include "stack.h"

void f();

int main(int argc, char const *argv[]) {
  f();
  return 0;
}




void f(){

Stack::push('c');
if(Stack::pop() != 'c') std::cout << "Impossible\n" << std::endl;

}
