
#include <iostream>
#include <cstring>
#include <cctype>
class Cat {
   public: 
      unsigned  age;   // вік кота
      char name[20]; // ім'я
      double mass;  // маса кота
      bool gender;   // стать

 // Декларація методів
      unsigned getAge();
      void setName(const char* name_);
      void setMass(double mas );
      void setAge(unsigned ag);
      void setGender(bool stat);
};


unsigned Cat::getAge(){
      return gender?age:20;
}

void Cat::setName(const char* name_){
    strncpy(name,name_,20);
}
void Cat::setMass(double mas){
     mass = mas;
}

void Cat::setAge(unsigned ag){
    age = ag;	
}

void Cat::setGender(bool stat){
    gender = stat;
}


int main(){

  Cat c1,c2;
  c1.setName("Vasya");
  c1.setAge(33);
  c1.setGender(true);
  std::cout<<c1.getAge()<<"\n"; 

  c2.setName("Masha");
  c2.setAge(29);
  c2.setGender(false);
  std::cout<<c2.getAge()<<"\n"; 

}
