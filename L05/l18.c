#include <stdio.h>

int main(void){
	const unsigned n=10;
	int a[10];
FILE *pfile;
int i,j,pos,start;
int * pstart;
pstart=&start; /* вказівник вказує на змінну start */
//clrscr();
printf("\nFilling vector with numbers...\n\n a=[ ");
	for(i=0;i<10;i++){
		a[i]=i+1;
		printf("%d ",a[i]);
         }

printf("]\n\nCreating binary file epa.dat for editing...");
pfile=fopen("epa.dat","w+b"); /*створення нового бінарного файлу для редагування */
j=fwrite(a,sizeof(int),n,pfile); /* запис елементів вектора а у бінарний файл */
if(j<n){ 
  printf("\n\nAn error occured. Only %d of %d elements was written",j,n);
}
else printf("\n\nFile was filled with %d elements successfully",j);

fflush(pfile); 
/* перед зчитуванням даних в режимі редагування обов’язково дописуємо вміст буфера у файл */ 
printf("\n\nEnter the number of element you want to read from bin file ");
scanf("%d",&j);
fseek(pfile,(j-1)*sizeof(int),SEEK_SET);
/*перехід до позиції необхідного елемента*/
pos=ftell(pfile); 
/*Визначення позиції у файлі*/
fread(pstart,sizeof(int),1,pfile);
printf("\n\n SEEK_SET: %dth element position is %d, element is %d",j,pos,*pstart);
printf("\n\nPress any key to exit");
fclose(pfile); /* закриття файла */
}
