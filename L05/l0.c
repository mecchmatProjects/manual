
#include <stdio.h>

struct Student  { 
char  name [25]; //  Поле 1:  Прізвище та ініціали – тип рядок з 25 символів 
char group[3]; //  Поле 2:  Група – тип рядок з 3 символів 
int pract_mark; //  Поле 3:  Бали за практику – тип ціле 
int course_project1; //  Поле 4:  Бали за перший проект – тип ціле 
int course_project2; //  Поле 5:  Бали за другий проект – тип ціле 
float additional_mark; // Поле 6: середній додатковий бал  -тип дійсне число
};

struct Student stl, st2;

#define maxnazva 40
#define maxavtor 20

struct book {
char nazva[maxnazva];
char avtor[maxavtor];
float cina;
};

struct anketa {
int tab_nom;
char fio[30];
char data[10];
int pol;
char adres[40];
float summa;
};

struct Point {
 int x,y;
}; 

int main() { 
struct Point p1; 

struct book odna={"Три мушкетери", "А.Дюма", 3};
// Доступ до полів point p1 
p1.x = 20; 
p1.y = 10; 
printf ("x = %d, y = %d", p1.x, p1.y); 
}
