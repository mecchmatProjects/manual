#include <iostream>

class Box {
   public: // загальний доступ до челнів класу  (пояснення - далі)
      double length;   // Довжина коробки
      double breadth;  // Ширина коробки
      double height;   // Висота коробки
};// декларація класу завершується крапкою з комою


class Cat {
   public: // загальний доступ до членів класу  (пояснення - далі)
      unsigned  age;   // вік кота
      char name[20]; // ім'я
      double mass;  // маса кота
      bool gender;   // стать
};// декларація класу завершується крапкою з комою


int main(){
  Box x;
  Cat cat1; 
}
