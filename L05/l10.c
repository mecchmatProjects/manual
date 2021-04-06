# include <stdio.h>
 # define LEN 256
int main() {
FILE *f;
int m, n;
double dt;
char s[LEN];
f = fopen("data.txt","r");
n = fscanf(f, "%d %lf %s", &m, &dt , s);
printf("Прочитано %d значень :\n", n);
printf("Цiле %d, дiйсне %lf , рядок %s\n", m, dt, s);
fclose(f);
}

