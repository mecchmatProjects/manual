
#include <iostream>     // std::cout
 // adds 2 int
int add(int x, int y){
return x + y;
}
// adds 2 doubles
double add(double x, double y){
return x + y;
}
// adds 3 ints
int add(int x, int y, int z){
    return x + y + z;
}

//double add(int x, int y) // error
int main () {
   std::cout<<add(1,2)<<","<<add(1.0,2.0)<<","<<add(1,2,3);
}


