#include <stdio.h>

#define  SURNAME_LEN 30
#define  FILENAME_LEN 30


typedef struct { 
  char surname[SURNAME_LEN]; 
  int kurs;
  int prog_lab, prog_theory;
 } Student;

int main(){ 
 char fileName [FILENAME_LEN];
 FILE * out;
 Student s;
 int ans, k=0;
 printf ("Iм 'я файлу ? ");

 fgets(fileName, FILENAME_LEN,stdin);
 out = fopen(fileName, "w");
 do{
   printf ("Прiзвище? ");
   //fgets(s.surname, SURNAME_LEN, stdin);
   fscanf(stdin,"%s", s.surname);
   printf(" Оцiнки з теорiї та лаб. робiт ? ");
   fscanf(stdin,"%d %d", &(s.prog_theory), &(s.prog_lab));
   fwrite(&s, sizeof(Student), 1, out);
   ++k;
   printf("Продовжити (1 так , 0 нi )?");
   scanf("%d", &ans);
} while(ans);
 
 printf("У файлi %d записiв \n", k);
 fclose(out);
}

