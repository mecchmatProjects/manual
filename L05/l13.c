 # include <stdio .h>
 # define N 5
int main () {
double w[ N ] = { 2.0 , 1.4142 , 1.1892 , 1.0905 , 1.0443 };
 char fileName [] = " data . dat ";
FILE * out ;
int i;
out = fopen ( fileName , "w" );
 for ( i = 0; i < N; ++i )
fwrite ( &(w[i]), sizeof(double), 1, out );
fclose ( out );
}
