#include <iostream>
#include <cstring>

class Person {
   public: 
      char name[20]; // ім'я
      bool gender;   // стать
      unsigned getAge();
      void setAge(unsigned ag);
      void introduce();
private:
      unsigned  age;   // вік 
      double height;  // зріст
};

unsigned Person::getAge(){
      return gender?age:25;
}

void Person::setAge(unsigned ag){
    age = ag;
}

void Person::introduce(){
   std::cout<<"My name is "<<name<<"\n";
}

int main() {

   Person girl;
   strcpy(girl.name,"Carmen");
   girl.gender = false; 
   girl.introduce();
   
   //girl.age = 20; // заборонена дія
   girl.setAge(25);
   std::cout<<"age is "<< girl.getAge();
}

/*
#include <iostream>

class Box {
   public: // декларація членів та методів
      double length;
      void setWidth( double wid );
      double getWidth( void );
   private:
      double width;
};
 
// Визначення методів
double Box::getWidth(void) {
   return width ;
}
 
void Box::setWidth( double wid ) {
   width = wid;
}


class Cat {
   public: 
      char name[20]; // ім'я
      bool gender;   // стать
      unsigned getAge();
      void setAge(unsigned ag);
      void introduce();
private:
      unsigned  age;   // вік кота
      double mass;  // маса кота
};

unsigned Cat::getAge(){
      return gender?age:20;
}

void Cat::setAge(unsigned ag){
    age = ag;
}

void Cat::introduce(){
   std::cout<<"My name is "<<name<<"\n";
}


int main() {
   Box box;
       // встановити довжину за допомогою публічного  методу
   box.length = 10.0; // OK: because length is public
   std::cout << "Length of box : " << box.length <<std::endl;
   // спроба встановити ширину
   // box.width = 10.0; // Помилка: width is private!!!
   box.setWidth(10.0);  // можна використати публічну функцію
   std::cout << "Width of box : " << box.getWidth() <<std::endl;
 
   Cat cat;
   strcpy(cat.name,"Carmen");
   cat.gender = false; 
   cat.introduce();
   
   //cat.age = 20;
   cat.setAge(20);
   std::cout<<"age is "<< cat.getAge();
}
*/
