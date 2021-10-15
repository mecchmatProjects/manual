#include <iostream>
#include <functional>

int main(){
    std::function<void()> func = nullptr;
    try {
        func();
    } catch(const std::bad_function_call& e) {
        std::cout << e.what() << std::endl;
    }
}
