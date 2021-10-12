#include<iostream>
//#include<iterator> // for iterators
#include<vector> // for vectors


void printIntVector(std::vector<int> & v ){
  std::vector<int>::iterator iter = v.begin();	// отримуємо ітератор
   while(iter!=v.end())	// поки не досягнемо кінця вектору
	{
		std::cout << *iter << std::endl; // виводимо результат як значення вказівника
		++iter;	// рухаємося по вектору інкрементуючи ітератор
	}
}
 
int main() { 
   
  int mas[8] ={1,2,3,4,5, 10,20,30};
  std::vector<int> ar(mas,mas+8);

  // Декларуємо ітератор до вектору 
  std::vector<int>::iterator ptr; 

  // виведемо елементи з допомогою begin() and end() 
  std::cout << "vector: "; 
  for(ptr = ar.begin(); ptr < ar.end(); ptr++) 
    std::cout << *ptr << " "; 

  printIntVector(ar);
}

