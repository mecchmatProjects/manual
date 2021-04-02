#include <stdio.h>
#include <locale.h>
int main (){
  printf("Input 0:");    
  char str[20];
  int i=0;
  while((str[i]=getchar()) && str[i]!='\n' && i<19) {i++; } 
  str[i] ='\0';  
  puts(str); 
} 
