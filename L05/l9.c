#include <stdio.h>
#include <string.h>

int main () {
char fileName [ 80 ];
FILE *f;
do {
  printf("Введiть iм 'я файлу або крапку :");
  scanf("%s", fileName );
  if(strcmp (fileName, ".")==0)
      return 0;
  f = fopen(fileName,"w");
} while(f==NULL);
/* далi нормальна обробка файлу */
//n = fscanf(f, "%d %lf %s", &m, &dt , s);
 int m=10;
 double dt=0.234;
 char s[10] ="text";
 fprintf(f,"%d %lf %s", m, dt, s);
 fclose(f);
}
