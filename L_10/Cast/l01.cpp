#include <iostream>
using namespace std;

int main(){

short a=200000000; // warning: overflow in implicit constant conversion
int b;
b=a;

cout<<a<<","<<b<<endl;

int a1=200000000;
short b1;
b1=a1;
cout<<a1<<","<<b1<<endl; // warning

b1=(short)a1;
cout<<b1<<endl;

unsigned x=-1;
int y;
y =x;
cout<<x<<"," << y<<endl;

int x1=-1;
unsigned y1;
y1 =x1; //
cout<<x1<<"," << y1<<endl;

const int a2=20000000;
int b2;
b2=a2;
cout<<a2<<","<<b2<<endl;
int a3=2000000;
const int b3 = a3 ;
cout<<a3<<","<<b3<<endl; 


int x2=2000000;
float y2; double z2;
y2 =x2; 
z2=y2;

cout<<x2<<","<<y2<<","<<z2<<endl;

double x3=2000000.12344;
float y3; int z3;
y3 = x3; //warning
z3= x3; // warning
cout<<x3<<","<<y3<<","<<z3<<endl;
  
}
/*
-15872
-15872
-15872
1
4294967295
2000000020000000
2000000
1,1,1
1,1,1
*/
