
#include <stdio.h>

int globalvar = 1;
extern int anotherglobalvar;
static int privatevar;
void f(){             
   int localvar;
   int localvar2 = 2;
   static int persistentvar;
}

int main(){

 f();

}
