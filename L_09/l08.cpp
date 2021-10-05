
#include <iostream>
#include <cmath>
 
class Vektor {
   double x;      // координати вектору 
   double y;     // 
   
   public:

   Vektor(){}
   Vektor(double x_, double y_):x(x_),y(y_) {}

   double length() {
      return sqrt(x*x + y*y);
   }
   
   void setX(double x){
      this->x = x; 
   }
   void setY(double x){
      this->y = x; 
   }
   // Перевантаження оператору віднімання 
   Vektor operator-(const Vektor& b) {
      Vektor res;
      res.setX(this->x - b.x);
      res.setY(this->y - b.y);
      return res;
   }

   friend std::ostream& operator<<(std::ostream& os, const Vektor& v){
     os<<"("<<v.x<<","<<v.y<<")";
     return os;
   }

   friend std::istream& operator>>(std::istream& is, Vektor& v){
     is>>v.x>>v.y;
     return is;
   }
};

int main() {
   Vektor v1,v2,v3;
   std::cout<<"v1:";
   std::cin>>v1;
   std::cout<<"v2:";
   std::cin>>v2;  
   // Додати два об’єкти класу:
   v3 = v1 - v2;
   // Вивести результат:
   std::cout<<v3<<"\n";
}
/*
v1:1 2
v2:1 5
(0,-3)


v1:2.3 5.3
v2:1.3 8.3
(1,-3)
*/

