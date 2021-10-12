
#include <iostream>

namespace  NewOne{
      int p;
      long q;
      struct A {
         static void print(){
         std::cout<<"A";
         }
      };
      void foo(int x) {
        std::cout<<"x="<<x;
      };
}

int main(){

  std::cout<< NewOne::p;
  std::cout<<NewOne::q;
  NewOne::A x;
  x.print();
  NewOne::A::print();
  NewOne::foo(42);
}
