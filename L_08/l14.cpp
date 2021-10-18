#include <iostream>

class Number {
   public:
      void setNumber(float x);
      float getNumber();
      Number();   // Декларація конструктору
      ~Number();  // Декларація деструктору
   private:
      float number;
};
 
// Визначення методів, зокрема конструктору та деструктору
Number::Number() {
   std::clog << "Object is being created\n";
}
Number::~Number() {
   std::clog << "Object is being deleted\n";
}
void Number::setNumber(float x) {
   number = x;
}
float Number::getNumber() {
   return number;
}

int main() {
   Number num;
   // встановити значення числа
   num.setNumber(42.42f);
   std::cout << "Number is : " << num.getNumber() <<"\n";
}
