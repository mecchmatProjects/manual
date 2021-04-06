#include <stdio.h>
int main(){
  short int n;
 printf("Введіть № квартири:");
  scanf("%hd",&n);
  switch(n){
    case 1:
    case 2:
    case 3:
    case 4: printf ("1-й поверх");
        break;
    case 5:
    case 6:
    case 7:
    case 8: printf ("2-й поверх");
        break;
    case 9:
    case 10:
    case 11:
    case 12: printf ("3-й поверх");
        break;
    case 13:
    case 14:
    case 15:
    case 16: printf ("4-й поверх");
        break;
    case 17:  
   case 18:
   case 19:
   case 20: printf ("5-й поверх");
       break;
   default: printf ("помилковий № квартири");
 }
}
