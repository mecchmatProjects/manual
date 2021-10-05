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
        if (b == 0)   throw "division by zero";
        c = a / b;
    }
    catch (const char* e)
    {
        std::cout << e << std::endl;
    }
    std::cout << "Result is " << c << std::endl;
}
