#include <stdio.h>

#define FNAME_LEN 80
#define SURNAME_LEN 30

typedef struct tag_student {
  char surname [SURNAME_LEN];
  int kurs;
  int prog_theor;
  int prog_lab;
} Student;

int main(){
  char fileName [ FNAME_LEN ];
  FILE *in;
  Student s;
  int k=1;
  printf("Iм 'я файлу ? ");
  fgets(fileName, FNAME_LEN, stdin);
  in = fopen(fileName, "r" );
  while(!feof(in)) {
   fread (&s, sizeof (Student), 1, in);
   printf ("%3d %30s %10d %10d\n", k, s.surname, s.prog_theor, s.prog_lab);
  ++k;
 }
 fclose(in);
}
