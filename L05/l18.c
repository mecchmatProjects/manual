#include <stdio.h>

int main(){
    const unsigned n=10;
    int a[10];
    FILE *fp;
    const char fname[20] = "epta.bin";
    int i,res,pos,start;
    int * pstart;
    pstart=&start; /* вказівник вказує на змінну start */
    //clrscr();
    printf("\nFill array by counter...\n ");
    for(i=0;i<10;i++){
	a[i]=i+1;
	printf("a[%d]=%d ",i, a[i]);
     }
  
   printf("\n Creating binary file %s for editing...", fname);
   fp=fopen(fname,"w+b"); /*створення нового бінарного файлу для редагування */
   res=fwrite(a,sizeof(int),n,fp); /* запис елементів вектора а у бінарний файл */
   if(res<n){ 
      printf("\n Error is happened. Only %d of %u elements were written",res,n);
   }
  else{
      printf("\n\nAll %d elements are written",res);
  }
 
 fflush(fp); 
 /* перед зчитуванням даних в режимі редагування обов’язково дописуємо вміст буфера у файл */ 
 printf("\n\nThe number of elements in binary file ");
 scanf("%d",&res);
 fseek(fp,(res-1)*sizeof(int),SEEK_SET);
 /*перехід до позиції необхідного елемента*/
 pos=ftell(fp); 
 /*Визначення позиції у файлі*/
 int r = fread(pstart,sizeof(int),1,fp);
 if(r==1){ 
   printf("\n\n SEEK_SET: %dth element position is %d, value is %d",res,pos,*pstart);
 }
 else{
  printf("\n\n SEEK_SET: %dth element position cant be read",res);
 }
 fclose(fp); /* закриття файла */
}
