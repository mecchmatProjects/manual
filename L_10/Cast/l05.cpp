// class type-casting
#include <iostream>

class Dummy {
    float i,j;
public:
    Dummy(){ 
        i=10.f;j=10.f;
    }
};

class Addition {
    int x,y;
  public:
    Addition (int a, int b) { x=a; y=b; }
    int result() { return x+y;}
};

int main () {
  Dummy d;
  Addition * padd;
  padd = (Addition*) &d;
  std::cout << padd->result();
}
