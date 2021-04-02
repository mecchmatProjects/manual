#define  SURNAME_LEN 30
typedef struct { 
char name[SURNAME_LEN]; 
int kurs;
int prog_lab, prog_theory;
 } Student;

int main()
char fileName [SURNAME_LEN];
FILE * out ;
Student s;
int ans , n =0;
printf ("Iм 'я файлу ? ");
fgets ( fileName , SURNAME_LEN, stdin );
out = fopen ( fileName , "w" );
do {
printf ("Iм 'я? "); printf (" Прiзвище ? ");
fscanf (s. surname , SURNAME_LEN , stdin );
printf (" Оцiнки з теорiї та лаб . робiт ? ");
scanf ("%d%d", &(s. prog_theor ), &(s. prog_lab ));
fwrite ( &s, sizeof (Student), 1, out );
 ++n;
printf (" Продовжити (1 так , 0 нi )? ");
 scanf ("%d", & ans );
} while ( ans );
printf ("У файлi %d записiв \n", n);
fclose ( out );
}

