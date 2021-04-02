
#include <stdio.h>
#include <stdlib.h>

int main() {
//З допомогою змінної file будемо мати доступ до файлу
FILE *file;
//Відкриваємо текстовий файл з правами на запис
file = fopen("C:/c/test.txt", "w+t");
//Пишемо в файл
fprintf(file, "Hello, World!");
//Закриваємо файл
fclose(file);
}
