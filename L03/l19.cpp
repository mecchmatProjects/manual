#include<cstdio>
#include<cstdlib>
#include <iostream>
//using namespace std;
int main(){
int n;
const int m=5;
printf("input the number");
scanf("%d",&n);
int** a; //a - вказівник на масив вказівників на рядки
a=new int* [n]; //виділення пам’яті для масиву вказівників на n рядків
for(int i=0;i<n;i++)
	a[i]=new int [m]; /*виділення пам’яті для кожного рядка масиву розмірністю nxm */
for(int i=0;i<n;i++){
   	for(int j=0;j<m;j++)
            printf("%d",a[i][j]);
}
for(int i=0;i<n;i++){
	delete [] a[i]; //звільнення пам’яті від кожного рядка
}
delete [] a; //звільнення пам’яті від масиву вказівників
getchar();
return 0;

}
