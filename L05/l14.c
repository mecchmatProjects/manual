# include <stdio .h>
# define N 5
int main () {
double w[ N ];
char fileName [] = "data.dat ";
FILE *inFile;
int k, i;
inFile = fopen ( fileName , "w" );
k = fread ( w, sizeof ( double ), N, inFile );
printf ( "З файлу прочитано %d чисел ", k );
for ( i = 0; i < k; ++i ){
printf ( "%lf\n", w[i] );
}
fclose (inFile );
}
