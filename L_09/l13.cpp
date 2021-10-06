#include<iostream>

class Base{
public:
  virtual Base* create();
  virtual Base* create1() const;
  void print(){
     std::cout<<"Base\n"; 
  }
};

class Derived : public Base{

public:
  virtual Derived* create();
  virtual Derived* create1() const;
  void print(){
     std::cout<<"Derived\n";
  }
};

Base* Base::create(){
  return this;
}


Base* Base::create1() const { 
  return new Base(); 
}

Derived* Derived::create(){
  return this;
}


Derived* Derived::create1() const { 
  return new Derived(); 
}


int main(){
  
  Base b;
  Base* pb = b.create(); 
  //Derived* pcb = b.create();
  pb->print(); // Base

  Derived c;
  Derived* pc = c.create(); 
  Base* pbc = c.create();
  pc->print(); // Derived
  pbc->print(); // Base


  Base* pb1 = b.create1(); 
  //Derived* pcb1 = b.create1();
  pb1->print(); // Base

  
  Derived* pc1 = c.create(); 
  Base* pbc1 = c.create();
  pc1->print(); // Derived
  pbc1->print(); // Base

}
