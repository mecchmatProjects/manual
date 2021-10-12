#include <iostream>

const size_t NUM_EMPLOYEES = 4;

class Employee {
  public:
    Employee () { std::cout << "Employee\n"; }
    virtual void print() = 0;
};

class Programmer : public Employee {
  public:
    Programmer() { std::cout << "Programmer\n"; }
    void print () { std::cout << "Printing programmer\n"; }
};

class QA : public Employee {
  public:
   QA () { std::cout << "QA\n"; }
   void print() { std::cout << "Printing QA\n"; }
};

class Menager : public Employee {
  public:
   Menager () { std::cout << "Menager\n"; }
   void print () { std::cout << "Printing menager\n"; }
};

int main() {

  Programmer prog1, prog2;
  Menager ex;
  QA sp;
  // инициализация массива служащих
  Employee *e[NUM_EMPLOYEES];
  e[0] = &prog1;
  e[1] = &sp;
  e[2] = &ex;
  e[3] = &prog2;
  // просмотр на предмет выяснения, кто является программистом
  for (int i = 0; i < NUM_EMPLOYEES; i++) {
   Programmer *pp = dynamic_cast<Programmer*>(e[i]);
   if(pp) {
     std::cout << "Is a programmer\n";
     pp->print();
   }
   else {
    std::cout << "Not a programmer\n";
   }
 }
}

/*
Employee
Programmer
Employee
Programmer
Employee
Menager
Employee
QA
Is a programmer
Printing programmer
Not a programmer
Not a programmer
Is a programmer
Printing programmer
*/
