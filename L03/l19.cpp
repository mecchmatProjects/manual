#include<cstdio>
#include<cstdlib>
#include <iostream>
//using namespace std;
int main(){
  unsigned n;
  const unsigned m = 3;
  printf("n=:");
  scanf("%u ",&n);
  double** a; //a - вказівник на масив вказівників на рядки

  //double** wrong = new double[n][m]; //error: cannot convert ‘double (*)[3]’ to ‘double**’ 

  a=new double* [n]; //виділення пам’яті для масиву вказівників на n рядків
  for(unsigned i=0;i<n;i++)
	a[i]=new double [m]; /*виділення пам’яті для кожного рядка масиву розмірністю nxm */


  for(unsigned i=0;i<n;i++){
   	for(unsigned j=0;j<m;j++)
            scanf(" %lf",&a[i][j]);
  }

  for(unsigned i=0;i<n;i++){
        printf("\n");
   	for(unsigned j=0;j<m;j++)
            printf("a[%u,%u]=%lf",i,j,a[i][j]);
  }

  for(unsigned i=0;i<n;i++){
	delete [] a[i]; //звільнення пам’яті від кожного рядка
  }
  delete [] a; //звільнення пам’яті від масиву вказівників
 // getchar();
}
/*
n=:3
1 2 1
1 1 1
1 2 3

a[0,0]=1.000000a[0,1]=2.000000a[0,2]=1.000000
a[1,0]=1.000000a[1,1]=1.000000a[1,2]=1.000000
a[2,0]=1.000000a[2,1]=2.000000a[2,2]=3.000000h
*/
