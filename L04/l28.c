# include<stdio.h>

//Функція транспонування квадратної матриці
void transpon (double *matr[], int n){
 double tmp;
 for (int i=0; i<n-1; i++)
       for(int j=i+1; j<n; j++)	{
		tmp=matr[i][j];
		matr[i][j]=matr[j][i];
		matr[j][i]=tmp;
      }
}

//Функція транспонування квадратної матриці
void transpon2 (double **matr, int n){ //segnment fault
  double tmp;
 for (int i=0; i<n-1; i++)
       for(int j=i+1; j<n; j++)	{
		tmp=matr[i][j];
		matr[i][j]=matr[j][i];
		matr[j][i]=tmp;
      }
}


int main(){
// Задано масив для транспонування
double A[4][4]={11, 12, 13, 14, 
                21, 22, 23, 24, 
                31, 32, 33, 34, 
                41, 42, 43, 44};
const int n=4;
// Допоміжний двовимірний масив вказівників
double * ptr[]={(double*)&A[0], (double*)&A[1],
(double*)&A[2], (double*)&A[3]};
// Виклик функції

transpon(ptr, n);
//transpon2((double**)A, n);
for(int i=0; i<n;i++){
	printf("\n Рядок %d : ",(i+1));
	for(int j=0; j<n; j++){
		printf("\t %3.3f ", A[i][j]);
	}
     }
}
/*
 Рядок 1 : 	 11.000 	 21.000 	 31.000 	 41.000 
 Рядок 2 : 	 12.000 	 22.000 	 32.000 	 42.000 
 Рядок 3 : 	 13.000 	 23.000 	 33.000 	 43.000 
 Рядок 4 : 	 14.000 	 24.000 	 34.000 	 44.000
*/
