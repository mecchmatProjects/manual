# include <stdio .h>
int main () {
char fileName [ 80 ];
FILE *f;
do {
  printf (" Введiть iм 'я файлу або крапку : " );
  scanf ( "%s", fileName );
  if( strcmp ( fileName , "." ) == 0 )
      return 0;
  f = fopen ( fileName , "r" );
} while ( f == NULL );
/* далi нормальна обробка файлу */
. . .
fclose ( f );
}
