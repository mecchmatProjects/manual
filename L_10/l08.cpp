#include <iostream>
int main(int argc, char **argv){
    int a=25, b=5, c=0;
  
    //1 input & division by zero processing  
    try {
        std::cout<<"a="<<std::endl;
        std::cin>>a;
        std::cout<<"b="<<std::endl;
        std::cin>>b;
        if (b==0) throw "Error";
        c = a/b;
        std::cout<<"c=" <<c<<"\n";
        std::cout<<"a=" <<a<<"b=" <<b<<"\n";
    } catch(const char* e) {
        std::cout<<"b==0 error:"<<e<<std::endl;
        std::cout<<"a=" <<a<<"b=" <<b<<"\n";
    } catch(...) {
        std::cout<<"Error for a=" <<a<<"b=" <<b<<"\n";
    }
}

/*
a=2
b=2
c=1

a=3
b=0
b==0 error:Error

a=4
b=u
b==0 error:Error

a=yhj
b=c=0

*/
