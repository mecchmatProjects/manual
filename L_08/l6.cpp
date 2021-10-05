#include <iostream>
#include <cstring>

class Person {
   public: // загальний доступ до членів класу  (пояснення - далі)
      unsigned  age;   // вік 
      char name[20]; // ім'я
      double height;  // зріст 
      bool gender;   // стать
};

int main() {

   Person p1,p2;

   p1.age = 21;
   p1.gender = true;
   p1. height = 78.5;
   strcpy(p1.name, "Vasya"); 

   p1.age = 22;
   p1.gender = true;
   p1. height = 88.5;
   strcpy(p2.name, "Petya");

   std::cout<<"Average height: "<< (p1. height + p2.height )/2<<std::endl;
}


/*
class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
};

int main(){
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
}

*/
