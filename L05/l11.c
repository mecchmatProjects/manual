
#include <stdio.h>
#include <stdlib.h>

int main() {
FILE *file;
char buffer[128];
const char fname[] = "C:/folder/test.txt";
file = fopen(fname, "w");
fprintf(file, "Hello, World!");
freopen(fname, "r", file);
fgets(buffer, 127, file);
printf("%s", buffer);
fclose(file);
}

