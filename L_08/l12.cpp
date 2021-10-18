#include <iostream>
 
class Number {
   public:
      void setNumber(float x);
      double getNumber();
      Number();  // Це конструктор
   private:
      double number;
};
 
// Визначимо якусь дію всередині конструктора
Number::Number() {
   std::clog << "Number is being created\n";
}
void Number::setNumber( float len ) {
   number = len;
}
double Number::getNumber( void ) {
   return number;
}

int main() {
   Number num; // конструктор створює Number
   num.setNumber(3.0);
   std::cout << "Number is : " << num.getNumber() <<"\n";
}

