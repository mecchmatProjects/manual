
#include <iostream>     // std::cout
#include <algorithm>    // std::swap
//#include <utility>
int main(){
 int z = std::max(1,2); 
 double x=1.0, y=2.0;
 y = std::max(x,y);
 std::string zs = std::max(std::string("A"),std::string("ABC"));
 std::cout<<"x,y,z"<<x<<","<<y<<","<<z<<","<<zs<<"\n";  
 
 int z1 = std::min(1,2);
 int x1=10, y1=20;    // x:10 y:20
 std::swap(x1,y1);    // x:20 y:10
 std::cout<<"x,y,z"<<x1<<","<<y1<<","<<z1<<"\n";  
}
