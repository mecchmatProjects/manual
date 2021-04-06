#include<iostream>
// C++ код: аргументи за замовченням 
void funct1(float x, int y, int z=8)
{
 std::cout<<"x = " << x << " у = " << y << "z = " << z << endl; 
}

void funct2 (float x, int y=2, int z=10)
{ std::cout <<"x = " << x << "y = " << у << "z = " << z << endl; }

void funct3 (float x = 3.15, int у = 42, int z = 202)
{ std::cout << "x = " << x << "y = " << у << "z = " << z << endl; }

int main ( ) {
funct1(2.1, 10); //за замовченням є один аргумент — z 
funct2(9.2); // за замовченням є два аргументи — у, z
funct3(); // за замовченням є всі три аргументи
}
