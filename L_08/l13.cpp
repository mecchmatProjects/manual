#include <iostream>

class Number {
   public:
      void setNumber(float x);
      float getNumber();
      Number(float x);  // Це також конструктор
   private:
      float number;
};
 
// Визначення конструктора та інших функцій
Number::Number(float x) {
   std::clog << "Number is being created, value = " << x << "\n";
   number = x;
}
/* Альтернитивний варіант
Number::Number( float x): number(x) {
   cout << "Number is being created, number = " << x << "\n";
}
*/
void Number::setNumber(float x) {
   number = x;
}
float Number::getNumber() {
   return number;
}

int main() {
   Number num(15.0f); // виклик конструктору
    // отиримуємо встановлене конструктором значення
   std::cout << "Value of Number : " << num.getNumber() <<"\n";
   // змінюємо число
   num.setNumber(4.5f);
   std::cout << "Value of Number : " << num.getNumber() <<"\n";
}
