#include <iostream>
#include <cstring>

class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
};

class Cat {
   public: // загальний доступ до членів класу  (пояснення - далі)
      unsigned  age;   // вік кота
      char name[20]; // ім'я
      double mass;  // маса кота
      bool gender;   // стать
};


int main() {
   Box Box1;        // Декларуємо Box1 класу Box
   Box Box2;        // Декларуємо Box2 of typ класу Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 визначаємо
   Box1.height = 5.0;
   Box1.length = 6.0;
   Box1.breadth = 7.0;

   // box 2 визначаємо
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;
   
   // виводимо обєм box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   std::cout << "Volume of Box1 : " << volume <<std::endl;

   // виводимо обєм box 2
   volume = Box2.height * Box2.length * Box2.breadth;
   std::cout << "Volume of Box2 : " << volume <<std::endl;


   Cat cat1,cat2;

   cat1.age = 21;
   cat1.gender = true;
   cat1.mass = 78.5;
   strcpy(cat1.name, "Vasya"); 

   cat1.age = 22;
   cat1.gender = true;
   cat1.mass = 88.5;
   strcpy(cat2.name, "Petya");

   std::cout<<"Average mass: "<< (cat1.mass + cat2.mass)/2<<std::endl;
}

