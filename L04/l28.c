# include<stdio.h>
//Функція транспонування квадратної матриці
void transpon (int n, double*p[]) 
{double x;
 for (int i=0; i<n-1; i++)
       for(int j=i+1; j<n; j++)
	{
		x=p[i][j];
		p[i][j]=p[j][i];
		p[j][i]=x;
      }
}
int main(){
// Задано масив для транспонування
double A[4][4]={11, 12, 13, 14, 
                21, 22, 23, 24, 
                31, 32, 33, 34, 
                41, 42, 43, 44};
// Допоміжний двовимірний масив вказівників
double * ptr[]={(double*)&A[0], (double*)&A[1],
(double*)&A[2], (double*)&A[3]};
// Виклик функції
int n=4;
transpon(n, ptr);
for(int i=0; i<n;i++){
	printf("\n Рядок %d : ",(i+1));
	for(int j=0; j<n; j++){
		printf("\t %3.3f ", A[i][j]);
	}
     }
}

