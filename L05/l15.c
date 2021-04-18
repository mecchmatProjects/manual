# include <stdio.h>
#define MAX_BUF 255
int main() {
  double x;
  char fileName [MAX_BUF] = "Data.dat";
  FILE *fin;
  int k =0;
  fin = fopen(fileName, "r");
  while (!feof(fin)) {
   int res = fread (&x, sizeof(double), 1, fin);
   if(res!=1) break;
   printf("%d %lf\n",res, x);	
   ++k;
 }
printf (" всього %d чисел \n", k);
fclose (fin);
}
