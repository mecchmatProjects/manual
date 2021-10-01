#include <iostream>

class Box {
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box
      double getVolume(void);// Returns box volume
};


double Box::getVolume(void) {
   return length * breadth * height;
}


class Cat {
   public: 
      int  age;   // вік кота
      char name[20]; // ім'я
      double mass;  // маса кота
      bool gender;   // стать
      int getAge(){
         return gender?age:20;
      }
};


int main(){

  Box b;
  std::cout<<b.getVolume();
  
  Cat cat1;
  std::cout<<cat1.getAge();  
}
