//C++ програма - демонстрація пари (pair) STL
#include <iostream>
#include <utility>

int main() {
std::pair <int, char> PAIR1;
PAIR1.first = 100;
PAIR1.second = 'G';

std::cout << PAIR1.first << " ";
std::cout << PAIR1.second << "\n" ;
std::pair <std::string,unsigned> PAIR2 ("Мехмат", 65);

std::cout << PAIR2.first << " ";
std::cout << PAIR2.second << "\n" ;
}
