#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string SS;   // C++ STL string
    std::string SS2;  // C++ STL string

    SS = "This is a string";
    SS2 = SS;

    std::cout << SS << "\n";
    std::cout << SS2 << "\n";
}
