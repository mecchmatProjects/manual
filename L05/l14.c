#include <stdio.h>

#define N 10
#define BUF_SIZE 20

int main() {
  double w[ N ];
  char fileName [BUF_SIZE] = "Data.dat";
  FILE *inFile;
  int k, i;
  inFile = fopen(fileName, "r");
  k = fread(w, sizeof (double), N, inFile );
  printf( "З файлу прочитано %d чисел ", k );
  for(i = 0; i < k; ++i ){
   printf ( "%lf\n", w[i] );
  }
 fclose (inFile);
}
