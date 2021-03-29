// c11 - scanf_s()
#include <stdio.h>
int main(){
   int   i, result;
   float fp;    char  c, s[81];
  wchar_t wc, ws[81];
   result = scanf_s( "%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws ); 
// C4996 warning: consider using scanf_s
   printf( "The number of fields input is %d\n", result );
   printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);
}
