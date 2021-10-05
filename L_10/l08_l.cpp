#include<iostream>
#include<csignal> /* for signal */
#include<cstdlib>
void fpe_handler(int signal){
  std::cerr << "Floating Point Exception: division by zero\n";
  exit(signal);
}
int main(){
  // Register floating-point exception handler.
   signal(SIGFPE, fpe_handler);
   int a = 1;
   int b = 0;
   std::cout << a/b << "\n";
}
/*
Floating Point Exception: division by zero
*/
