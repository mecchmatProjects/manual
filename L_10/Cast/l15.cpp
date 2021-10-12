// dynamic_cast
#include <cstdio>
#include <iostream>
#include <exception>

class Base { 
 
virtual void dummy() {}
  public:
  void use(){
	std::cout<<"Base"<<'\n';
  }
 };

class Derived: public Base { int a;

public:
 void use(){ 
   std::cout<<"Derived"<<'\n';
 }

 };


int main () {
    
  try {
    Base * pba = new Derived;
    Base * pbb = new Base;
    Derived * pd;
    pd = dynamic_cast<Derived*>(pba);
    if (pd==0) std::cout << "Null pointer on first type-cast.\n";
    pd->use(); 
    pd = dynamic_cast<Derived*>(pbb);
    if (pd==0) std::cout  << "Null pointer on second type-cast.\n";
    pd->use();
    
    Base * pc = dynamic_cast<Base*>(pd) ;
    pc->use();
    Base * pe = dynamic_cast<Base*>(pba);
    pe->use();

  } catch (std::exception& e) {std::cout  << "Exception: " << e.what();}


}

/*
Derived
Null pointer on second type-cast.
Derived
Base
Base

*/
