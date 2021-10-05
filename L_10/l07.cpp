

#include <iostream>
#include <cstring>
#include <string>

int dilennya(int n1, int n2)
{
    if (n2 == 0) {
        throw 42;
    }
    return n1 / n2;
};

int main(){
    int a = 25, b = 5, c = 0;
    std::cout << "a=";
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;

    try    {
  	c = dilennya(a,b);
    }
    catch (int x)    {
        std::cout << "division by zero\n";
    }
    std::cout << "Result is " << c << std::endl;
}

