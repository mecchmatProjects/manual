#include <iostream>
#include <cstring>
#include <cctype>
class Person {
   public: 
      unsigned  age;   // вік 
      char name[20]; // ім'я
      double height;  // зріст 
      bool gender;   // стать

 // Декларація методів
      unsigned getAge();
      void setName(const char* name_);
      void setMass(double mas );
      void setAge(unsigned ag);
      void setGender(bool stat);
};

unsigned Person::getAge(){
      return gender?age:25;
}

void Person::setName(const char* name_){
    strncpy(name,name_,20);
}

void Person::setAge(unsigned ag){
    age = ag;	
}

void Person::setGender(bool stat){
    gender = stat;
}

int main(){

  Person c1,c2;
  c1.setName("Vasya");
  c1.setAge(33);
  c1.setGender(true);
  std::cout<<c1.name<<" age:"<<c1.getAge()<<"\n"; 

  c2.setName("Masha");
  c2.setAge(29);
  c2.setGender(false);
  std::cout<<c2.name<<" age:"<<c2.getAge()<<"\n"; 
}
