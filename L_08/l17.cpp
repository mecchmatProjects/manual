#include <iostream>

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
   /* Оскільки printWidth() є другом (friend) класу Box, ця функція має доступ до всіх його членів та методів  */
   std::cout << "Width of box : " << box.width <<std::endl;
}

// 
class Cat;

class CloseFriend{
   public:
     void talkInsideFamily(const Cat& x);
};


class Cat {
      unsigned  age;   // вік 
public:
      void setAge (unsigned ag);
      friend void printRealAge(Cat x); // вказали дружню функцію
      friend class Doctor::treat(Cat& x); /* вказали дружній метод класу
        - клас краще передавати за посиланням */
      friend CloseFriend; // казали дружній клас
};

void Cat::setAge(unsigned ag){
   age = ag;
}

void printRealAge(Cat c){
   std::cout<<"Real age is "<<c.age<<"\n";
}

class Doctor{
public:
   void treat(Cat& x){
      std::cout<<"I use personal data, for example age:"<<x.age<<"\n";
   }
};


void CloseFriend::talkInsideFamily(const Cat& x){
      std::cout<<"I know real age:"<< x.age<<"\n";
} 

int main() {
   Box box;
   // встановили ширину
   box.setWidth(10.0);
   // використали дружню функцію для виведення
   printWidth( box );

   Cat c;
   //  
   c.setAge(40);
   // використали дружню функцію для виведення
   printRealAge(c); 
   
   Doctor d;
   d.treat(c);

   CloseFriend f;
   f.talkInsideFamily(c);

}

