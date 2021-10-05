#include <iostream>
 
class Angle {
   private:
      int gradus;          // Градус 0-359
      int minutes;         // хвилина 0-60
   public:
      // конструктор 1
      Angle() {
         gradus = 0;
         minutes = 0;
      }
     // конструктор 2
      Angle(int g, int m) {
         gradus = g % 360;
         minutes = m % 60;
      }
      // відображення відстані
      void displayAngle() {
         std::cout << "Angle is " << gradus << " g and " << minutes <<"'\n";
      }
      // перевантажений (overloaded) minus (-) оператор
      Angle operator- () {
         gradus = -gradus;
         return Angle(gradus, minutes);
      }

   // prefix and postfix decrement operators.
   Angle& operator--(){       // Prefix decrement operator.
       gradus--;
       return *this;
   }
   Angle operator--(int){     // Postfix decrement operator.
       Angle temp = *this;
       --*this;
       return temp;
   }
      Angle operator+(const Angle& a) {
        int p=0;
        int m = this->minutes + a.minutes;
        if(m>=60) {
	    p=1;
            minutes -= 60; 	
	}
        int g = gradus + a.gradus + p;
        return Angle(g, m);
      }
     
};

class Vektor {
      double x,y;
     public:
	Vektor(double x_, double y_):x(x_),y(y_) {}
      // перевантажений (overloaded) minus (-) оператор
        Vektor operator- () {
          x = -x;
          y = -y; 
          return Vektor(x,y);
        }	
      void showVektor(){
          std::cout<<"Vektor is ("<<x<<","<<y<<")\n";
      }
};

int main() {
   Angle a1(45, 30), a2(-5, 15);
   -a1;                     // застосуємо оператор -
   a1.displayAngle();    // покажемо D1

   -a2;                     // застосуємо оператор -
   a2.displayAngle();    // покажемо D2
   
   Angle a3 = a1 + a2;
   a3.displayAngle();

   a2--;
   a2.displayAngle();
   (--a3).displayAngle();

   Vektor v1(2,-3);
   -v1; v1.showVektor();
}
/*
Angle is -45 g and 30'
Angle is 5 g and 15'

Vektor is (-2,3)

Angle is -40 g and 45'


*/
