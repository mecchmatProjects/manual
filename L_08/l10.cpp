#include <iostream>
 
class Number {
   public: // декларація членів та методів
      float number;
      void setNumber(float x);
      float getNumber();
};
 
// Визначення  методів
float Number::getNumber() {
   return number;
}
 
void Number::setNumber(float x) {
   number = x;
}
 
int main() {
   Number x;
   // встановити число за допомогою публічного  методу
   x.setNumber(5.0f);
   std::cout << "Number: " << x.getNumber() <<"\n";
 
   // встановити число за допомогою доступу до публічного члену
   x.number = 11.0f; // OK: because number is public
   std::cout << "Number is: " << x.number <<"\n";
}
