#include <iostream>

#include <cstring> // Required by strcpy()
#include <cstdlib> // Required by malloc()

int main(int argc, char **argv)
{
    char CC[17];// C character string (16 characters + NULL termination)
    char *CC2;   // C character string. No storage allocated.

    strcpy(CC,"This is a string");
    CC2 = (char *) malloc(17);    // Allocate memory for storage of string.
    
    strcpy(CC2, CC);//strcpy(CC2,"This is a string");

    std::cout << CC << "\n";
    std::cout << CC2 << "\n";
}
