# include <stdio .h>
int main () {
double x;
char fileName [] = "data.dat";
FILE *outFile;
int k =0;
in = fopen ( fileName , "r" );
while ( ! feof (outFile) ) {
fread ( &x, sizeof ( double ), 1, in );
printf ("%lf\n", x);	
 ++k;
 }
printf (" всього %d чисел \n", k);
fclose (outFile );
}
