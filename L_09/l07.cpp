
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
   // Перевантаження оператору мінус
   Vektor operator-(const Vektor& b) {
      Vektor res;
      res.setX(this->x - b.x);
      res.setY(this->y - b.y);
      return res;
   }


  // Перевантаження оператору порівняння
   bool operator<(Vektor& b) {
      return length()<b.length();
   }

};

int main() {
   Vektor v1(1.0,1.0),v2,v3;
   double len = 0.0;  
 
   // v2 ініціалізація
   v2.setX(2.0);
   v2.setY(3.0);
   std::cout << "v1<v2 is "<<std::boolalpha<<(v1<v2)<<"\n"; 
   // Різниця двох об’єктів класу:
   v3 = v1 - v2;
    // Довжина v3
   std::cout << "| v3 | = " << v3.length() <<"\n";
}

