#include <iostream>
#include <exception>
struct MyException : public std::exception {
   
   int line; 
   MyException(int m){
        line = m; 
    } 
   const char * what () const throw () {
      return "My C++ Exception";
   }
   int getLine(){
       return line;
  }  
};
 
int my_function() {
   try {
      throw MyException(2);
   } catch(MyException& e) {
      std::cout << "MyException caught" << std::endl;
      std::cout << e.what() << "\t";
      std::cout << "on line: "<< e.getLine() << std::endl;
   } catch(std::exception& e) {
      //Other errors
      std::cout << e.what() << std::endl;
   }
}

int main(int argc, char **argv)
{

 my_function();

}

/*
MyException caught
C++ Exception	on line: 2

*/
