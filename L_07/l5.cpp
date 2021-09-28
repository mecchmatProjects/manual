/* l5.СРР — друк змінних */
#include <iostream> // бібліотека вводу-виводу
#include <string> // бібліотека для рядкового типу  string

using namespace std; // використовуємо простір імен  std для всієї програми

int main(){ 
 char name[] = "Петро"; // ANSI рядок  name
 char middle = 'P'; // символьна змінна
 string last("Петренко"); // С++ рядок  last
 int age =20; // ціла змінна
 int incentives = 2;
 float salary = 3009.75f; // дійсна змінна одиночної точності
 double percent = 8.5; // // дійсна змінна подвійної точності
 //виведення результатів
 cout << "Перевірка даних\n";
 cout << name << " "<< middle <<" " << last << "\n"<<endl;
 cout << "Вік, доплата, зарплата, відсоток:\n";
 cout << " " << age << ", " << incentives << ", " << salary << ", " << percent;
 cin.get(); // затримка – чекаємо введення символу та вводу
}
