
/*
 Функция fgetpos() хранит текущее значение указателя положения в файле, связанном с указа­телем stream, в переменной, на которую указывает pos. Тип fpos_t определен в stdio.h.

В случае успеха fgetpos() возвращает 0; при неудаче возвращается ненулевая величина и errno устанавливается в одно из следующих значений:
EBADF 	Недействительный поток файла
EINVAL 	Недействительный аргумент
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
FILE *fp;
long l;
int i;
fpos_t *pos; /* fpos_t определен в stdio.h */
pos = &l;
if ((fp=fopen(argv[1], "w+"))==NULL) {
printf ("Cannot open file.\n");
exit (1);
}
for (i=0; i <10; i++)
fputc ( 'Z' , fp); /* запись 10 Z в файл */
fgetpos (fp, pos);
printf("We are now at position %ld in the file.", *pos);
fclose (fp);
return 0;
}
