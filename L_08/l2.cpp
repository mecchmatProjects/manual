#include <iostream>

struct Box {
    // загальний доступ до челнів класу  (пояснення - далі)
      double length;   // Довжина коробки
      double breadth;  // Ширина коробки
      double height;   // Висота коробки
};// декларація класу завершується крапкою з комою


struct Cat {
   public: // загальний доступ до членів класу  (тут не обв'язковий)
      unsigned  age;   // вік кота
      char name[20]; // ім'я
      double mass;  // маса кота
      bool gender;   // стать
};// декларація класу завершується крапкою з комою


int main(){
  Box Box2;
  Box Box1; // Оголошуємо Box1 типу Box
  Cat cat1,cat2; // Оголошуємо змінні(обєкти) типу Cat
}
