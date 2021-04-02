# include <stdio .h>

# define FNAME_LEN 80
# define SURNAME_LEN 20

 typedef struct tag_student {
char surname [ SURNAME_LEN ];
int prog_theor ;
 int prog_lab ;
} Student;

int main () {
char fileName [ FNAME_LEN ];
FILE *in;
Student s;
int n =1;
printf ("Iм 'я файлу ? ");
fgets ( fileName , FNAME_LEN , stdin );
in = fopen ( fileName , "r" );
while ( ! feof (in) ) {
   fread ( &s, sizeof (Student), 1 );
   printf ("%3d %30 s %10 d %10 d\n", n, s. surname , s. prog_theor , s. prog_lab );
  ++n;
}
fclose ( in );
}
