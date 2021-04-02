#include <stdio.h>
#include <stdlib.h>

#define ERROR_FILE_OPEN -3

int main() {
FILE *output = NULL;
int number;
output = fopen("D:/c/output.bin", "wb");
if (output == NULL) {
     printf("Error opening file");
     getchar();
exit(ERROR_FILE_OPEN);
}

scanf("%d", &number);
fwrite(&number, sizeof(int), 1, output);

fclose(output);
}
