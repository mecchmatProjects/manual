#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             // Фути: 0 to infinite
      int inches;           // Дюйми: 0 to 12
   public:
      // конструктор 1
      Distance() {
         feet = 0;
         inches = 0;
      }
     // конструктор 2
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      // відображення відстані
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
      // перевантажений (overloaded) minus (-) оператор
      Distance operator- () {
         feet = -feet;
         inches = -inches;
         return Distance(feet, inches);
      }
};

int main() {
   Distance D1(11, 10), D2(-5, 11);
   -D1;                     // застосуємо оператор -
   D1.displayDistance();    // покажемо D1

   -D2;                     // застосуємо оператор -
   D2.displayDistance();    // покажемо D2
   return 0;
}

