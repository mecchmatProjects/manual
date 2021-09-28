// Р.СРР 
#include <iostream>
#include <iomanip>

int main ( ){
 float prod_sum; // prod_sum — сума продаж
 float nalog;
 //виведення підказки
 std::cout << "Введить суму продаж";
 std::cin >> prod_sum;
 //обчислення податку
 nalog = prod_sum * 0.7f;
 std::cout << "Сума: " << std::setprecision(3) << prod_sum<<std::endl;
 std::cout << "Сума без податків: " << std::setprecision(3) << nalog << "\n";
}
