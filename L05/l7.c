
#include <stdio.h>
#include <stdlib.h>

int main() {
 //З допомогою змінної file будемо мати доступ до файлу
 FILE *file;
 const char filename[20] = "C:/Progs/text.txt";
 //Відкриваємо текстовий файл з правами на запис
 file = fopen(filename, "w+t"); 
 //Пишемо в файл
 fprintf(file, "Hello, World!");
 //Закриваємо файл
 fclose(file);
}
