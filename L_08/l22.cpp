#include <iostream>
#include <cstring>
class Person {
      unsigned  age;   // вік
      char name[20]; // ім'я
      double height;  //  
      bool gender;   // стать
   public: 
      static int objectCount; // статичний член – лічильник об’єктів
      // Конструктор
      Person(){}
      Person(unsigned a, const char* n, double h, bool g){
         strncpy(name,n,20);
         age = a;
         height = h;
         gender = g;  
         objectCount++;
      } 

 // Декларація методів
      void getName(){
         std::cout << name<<"\t";
      } 
      unsigned getAge(){
	 return gender?age:25;	  
      } 
      static bool getCount() { // статичний метод 
         return objectCount<1;
      }
};

// Інціалізуємо статичний член класу
int Person::objectCount = 0;

int main(void) {
   // Друкуємо загальну кількість обєктів
   std::cout << "Inital Stage Count: " << std::boolalpha<<Person::getCount() << "\n";

   Person p1[3] = {Person(33, "Vasya", 1.8, true), Person(34, "Vasya2", 1.8, true), };    // Визначили обєкти
  // Друкуємо загальну кількість обєктів
   std::cout << "Final Stage Count: " << Person::getCount() << "\n";
}
/*
Inital Stage Count: true
Final Stage Count: false
*/
/*#include <iostream>
using namespace std;
class Box {
   public:
      static int objectCount;
      // Конструктор
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // збільшуємо на одиницю лічильник об’єктів для кожного обєкту
         objectCount++;
      }
      double Volume() {
         return length * breadth * height;
      }
      static int getCount() { // статичний метод для виведення лічильника
         return objectCount;
      }
   private:
      double length;
      double breadth;
      double height;
};

// Ініціалізація статичного члену потрібна в будь-якому файлі що використовує лічильник
int Box::objectCount = 0;


class Cat {

      unsigned  age;   // вік
      char name[20]; // ім'я
      double height;  //  
      bool gender;   // стать
   public: 
      static int objectCount; // статичний член – лічильник об’єктів
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
      static bool getCount() { // статичний метод 
         return objectCount<10;
      }
};

// Інціалізуємо статичний член класу
int Cat::objectCount = 0;

int main(void) {
   // Друкуємо загальну кількість обєктів
   cout << "Inital Stage Count: " << Box::getCount() << endl;

   Box Box1(3.3, 1.2, 1.5);
   Box Box2(8.5, 6.0, 2.0);

// Друкуємо загальну кількість обєктів
   cout << "Final Stage Count: " << Box::getCount() << endl;

   Cat p1[] = {Cat(33, "Vasya", 1.8, true),Cat(34, "Vasya2", 1.8, true) };    // Визначили 

   return 0;
}

*/
