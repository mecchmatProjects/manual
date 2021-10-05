#include <iostream>
#include <cstring>
class Person {
      unsigned  age;   // вік
      char name[20]; // ім'я
      double height;  //  
      bool gender;   // стать
   public: 
      // Конструктор
      Person(unsigned a, const char* n, double h, bool g){
         strncpy(name,n,20);
         age = a;
         height = h;
         gender = g;  
      } 

 // Декларація методів
      void getName(){
         std::cout << name<<"\t";
      } 
      unsigned getAge(){
	 return gender?age:25;	  
      } 
};

int main(void) {
Person p1(33, "Vasya", 1.8, true);    // Визначили p1
   Person p2(27, "Masha", 1.5,false);    // Визначили p2

   Person *ptrPerson ;
   ptrPerson = &p1;
// Доступ до даних через публічні методи
   std::cout << "Age of p1: " << ptrPerson->getAge() << std::endl;
   // Беремо вказівник – інший обєкт
   ptrPerson = &p2;
   // Отримаємо доступ до нього через вказівник
   std::cout << "Age of p2: " << ptrPerson->getAge() << std::endl;
}
/*
#include <iostream>
using namespace std;

class Box {
   public:
      // Конструктор
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume() {
         return length * breadth * height;
      }
      
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};


class Cat {

      unsigned  age;   // вік
      char name[20]; // ім'я
      double height;  //  
      bool gender;   // стать
   public: 
      // Конструктор
      Cat(unsigned a, char* n, double h, bool g){
         strncpy(name,n,20);
         age = a;
         height = h;
         gender = g;  
      } 

 // Декларація методів
      void getName(){
         std::cout << name<<"\t";
      } 
      unsigned getAge(){
	 return gender?age:25;	  
      } 
};

int main(void) {
   Box Box1(3.3, 1.2, 1.5);    // Визначили box1
   Box Box2(8.5, 6.0, 2.0);    // Визначили box2
   Box *ptrBox;                // Визначили вказівник на клас Box

   // Взяли адресу першого обєкту
   ptrBox = &Box1;

   // Доступ до даних через публічні методи
   cout << "Volume of Box1: " << ptrBox->Volume() << endl;
   // Беремо вказівник – інший обєкт
   ptrBox = &Box2;
   // Отримаємо доступ до нього через вказівник
   cout << "Volume of Box2: " << ptrBox->Volume() << endl;
   
   Cat p1(33, "Vasya", 1.8, true);    // Визначили p1
   Cat p2(27, "Masha", 1.5,false);    // Визначили p2

   Cat *ptrCat ;
   ptrCat = &p1;
// Доступ до даних через публічні методи
   std::cout << "Age of p1: " << ptrCat->getAge() << std::endl;
   // Беремо вказівник – інший обєкт
   ptrCat = &p2;
   // Отримаємо доступ до нього через вказівник
   cout << "Age of p2: " << ptrCat->getAge() << std::endl;
}
*/

