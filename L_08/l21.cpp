#include <iostream>
#include <cstring>
#include <string>
class Person {
      unsigned  age;   // вік
      char name[20]; // ім'я
      double height;  //  зріст
      bool gender;   // стать
   public: 
      static int objectCount; // статичний член – лічильник об’єктів
      // Конструктор
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
};

// Інціалізуємо статичний член класу
int Person::objectCount = 0;

int main(void) {
   Person p1(33, "Vasya", 1.8, true);    // Визначили p1
   Person p2(27, "Masha", 1.5, false);    // Визначили p2
   std::cout << "Total objects: " << Person::objectCount << std::endl;
}

