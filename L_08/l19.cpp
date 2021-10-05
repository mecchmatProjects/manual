#include <iostream>
#include <cstring>
class Person {
      unsigned  age;   // вік
      char name[20]; // ім'я
      double height;  //  зріст
      bool gender;   // стать
   public: 
 // Декларація методів
      Person(unsigned a, const char* n, double h, bool g){
         strncpy(name,n,20);
         age = a;
         height = h;
         gender = g;  
      } 
      void getName(){
         std::cout << name<<"\t";
      } 
      int compare(const Person& p) {
         return this->height > p.height;
      }
};

int main() {
   Person p1(33, "Vasya", 1.8, true);    // Визначили p1
   Person p2(27, "Petya", 1.7,true);    // Визначили p2

   if(p1.compare(p2)) {
      p2.getName();
      std::cout << " is smaller than ";
      p1.getName();
   } else {
      p2.getName();
      std::cout << "is equal to or larger than";
      p1.getName();
   }
}
/*
#include <iostream>
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
      int compare(Box box) {
         return this->Volume() > box.Volume();
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
 // Декларація методів
      Cat(unsigned a, char* n, double h, bool g){
         strncpy(name,n,20);
         age = a;
         height = h;
         gender = g;  
      } 
      void getName(){
         std::cout << name<<"\t";
      } 
      int compare(const Cat& p) {
         return this->height > p.height;
      }
};

int main(void) {
   Box Box1(3.3, 1.2, 1.5);    // Визначили box1
   Box Box2(8.5, 6.0, 2.0);    // Визначили box2

   if(Box1.compare(Box2)) {
      cout << "Box2 is smaller than Box1" <<endl;
   } else {
      cout << "Box2 is equal to or larger than Box1" <<endl;
   }

   Cat p1(33, "Vasya", 1.8, true);    // Визначили p1
   Cat p2(27, "Petya", 1.7,true);    // Визначили p2

   if(p1.compare(p2)) {
      p2.getName();
      cout << " is smaller than ";
      p1.getName();
   } else {
      p2.getName();
      cout << "is equal to or larger than";
      p1.getName();
   }
   
   
}
*/


