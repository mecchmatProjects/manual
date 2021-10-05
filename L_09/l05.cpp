#include <iostream>
#include <cmath>

class Vektor {
   public:
      double getLength() {
         return sqrt(x*x + y*y);
      }
      void setX(double x_) {
         x = x_;
      }
      void setY(double y_) {
         y = y_;
      }
      // Overload + operator to add two Vektor objects.
      Vektor operator+(const Vektor& b) {
         Vektor res;
         res.x = this->x + b.x;
         res.y = this->y + b.y;
         return res;
      }
   private:
      double x;      
      double y;         
};
int main() {
   Vektor v1, v2;             // Дві змінні класу вектор
   Vektor v3;                // Змінна класу вектор для результату
   double len = 0.0;     // Змінна для довжини
   // ініціалізація v1
   v1.setX(6.0);
   v1.setY(3.0); 
   // ініціалізація v2
   v2.setX(6.0);
   v2.setY(2.0);
   // розмір v1
   len = v1.getLength();
   std::cout << "Length of v1: " << len <<"\n";
   // розмір v2
   len = v2.getLength();
   std::cout << "Length of v2: " << len <<"\n";
   // Додати два обєкти перевантеженим додаванням
   v3 = v1 + v2;
   // розмір v3
   len = v3.getLength();
   std::cout << "Length of v3 : " << len<<"\n";
}

/*
Length of v1: 6.7082
Length of v2: 6.32456
Length of v3 : 13
*/
