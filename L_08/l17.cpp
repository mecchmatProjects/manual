#include <iostream>

class Person;

class Doctor{
public:
   void treat(Person& x);
};

class Person {
      unsigned  age;   // вік 
public:
      void setAge (unsigned ag);
      friend void printRealAge(Person x); // вказали дружню функцію
      friend void Doctor::treat(Person& x); /* вказали дружній метод класу
        - клас краще передавати за посиланням */
      friend class CloseFriend; // казали дружній клас
};

void Person::setAge(unsigned ag){
   age = ag;
}

void printRealAge(Person c){
   std::cout<<"Real age is "<<c.age<<"\n";
}

void Doctor::treat(Person& x){
      std::cout<<"I use personal data, for example age:"<<x.age<<"\n";
   }


class CloseFriend{
   public:
     void talkInsideFamily(const Person& x);
};

void CloseFriend::talkInsideFamily(const Person& x){
      std::cout<<"I know real age:"<< x.age<<"\n";
} 

int main() {
   Person c;
   //  
   c.setAge(40);
   // використали дружню функцію для виведення
   printRealAge(c); 
   
   Doctor d;
   d.treat(c);

   CloseFriend f;
   f.talkInsideFamily(c);

}

/*
class Box {
   double width;
   public:
      friend void printWidth( Box box );
      void setWidth( double wid );
};

// визначення методів
void Box::setWidth( double wid ) {
   width = wid;
}

// Примітка: printWidth() не є методом ніякого класу.
void printWidth( Box box ) {
   // Оскільки printWidth() є другом (friend) класу Box, ця функція має доступ до всіх його членів та методів  
   std::cout << "Width of box : " << box.width <<std::endl;
}

   Box box;
   // встановили ширину
   box.setWidth(10.0);
   // використали дружню функцію для виведення
   printWidth( box );

*/ 

