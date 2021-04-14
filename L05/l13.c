#include <stdio.h>

#define N 5
#define BUF_SIZE 20
int main () {
  double w[N] = { 2.0 , 1.4142 , 1.1892 , 1.0905 , 1.0443 };
  const char fileName [BUF_SIZE] = "Data.dat";
  FILE *outFile;
  int i;
  int res;
  outFile = fopen(fileName, "wb");
  for(i = 0; i < N; ++i){
    res=fwrite(&(w[i]), sizeof(double), 1, outFile);
      printf("\n%d numbers written", res);
  }
 
  res = fwrite(&(w[0]), sizeof(double), N, outFile);
  printf("\n%d numbers written", res);

  fclose(outFile);
}
