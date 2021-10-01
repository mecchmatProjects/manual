#include <iostream>

class Box {
   public: // загальнодоступні члени та методи
      double getVolume(void) {
         return length * breadth * height;
      }

   private:  // захищені члени та методи
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box
};


class Cat {
   public:  
      char name[20]; // ім'я
      
      unsigned getAge(){
	if(gender){
            return age;
	}
        else{
	    return 20;	
        }
      } 
   private: // 
      unsigned  age;   // вік кота
      double mass;  // маса кота
      bool gender;   // стать
};// декларація класу завершується крапкою з комою

int main(){

  Box box1; // Оголошуємо Box1 типу Box
  box1.getVolume();

  Cat cat1;
  cat1.getAge();
}
