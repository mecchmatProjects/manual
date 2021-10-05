#include <iostream>
#include <cstring>
#include <string>

int main(){
    int a = 25, b = 5, c = 0;
    std::cout << "a=";
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;

    try
    {
        c = a / b;
    }
    catch (...)
    {
        std::cout << "division by zero";
    }
    std::cout << "Result is " << c << std::endl;
}
/*
a 
2
B 
0
Исключение в операции с плавающей точкой
*/
