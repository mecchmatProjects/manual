#include <iostream>
#include <functional>

int myPlus (int a, int b) {return a + b;}

int main(){
    std::function<int (int)> f(std::bind(myPlus, std::placeholders::_1, 5));
    std::cout << f(10) << std::endl;
}
