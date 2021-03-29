// c11 - scanf_s(), gcc won't run
#include <stdio.h>
#include <wchar.h>
/*
#if defined(__clang__)
....
#elif defined(__GNUC__) || defined(__GNUG__)
....
#elif defined(_MSC_VER)
*/

//#define GCC_COMPILER (defined(__GNUC__) && !defined(__clang__))

#define USE_WC 

int main(){
  int   i, result;
  float fp;    
  char  c, s[81];
  wchar_t wc, ws[81];
#ifndef USE_WC
  // C4996 warning: consider using scanf_s  
#if defined(_MSC_VER)
   result = scanf_s( "%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws ); 
#else
   result = scanf( "%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws ); 
#endif

   printf( "The number of fields input is %d\n", result );
   printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);

#else
#if defined(_MSC_VER)
   //result = wscanf(L"%s", ws ); 
   result = wscanf_s(L"%d %f %c %c %80s %80S", &i, &fp, &c, &wc, s, ws ); 
#else
   result = wscanf(L"%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws ); 
#endif

   printf( "The number of fields input is %d\n", result );
   printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);
#endif
}

/*
1 23.34 c П dsgfdg абляут            
The number of fields input is 6
The contents are: 1 23.340000 c c dsgfdg afsdf 
*/
