
#include <stdio.h>

int createFile(const char* fname){
  FILE* f;
  f=fopen(fname,"wb");
  if(f){
     int n;
     scanf("%d",&n); 
     int x=12345789;
     int r =fwrite(&x,4,n,f);
     fclose(f);  
     return r;
  }
  return -1;
}


int fsize(char* file) {
  int size;
  FILE* fh;

  fh = fopen(file, "rb"); //binary mode
  if(fh != NULL){
    if( fseek(fh, 0, SEEK_END) ){
      fclose(fh);
      return -1;
    }

    size = ftell(fh);
    fclose(fh);
    return size;
  }

  return -1; //error
}

int main(){
 FILE *f;
 long l;
 char* fileName = "data.dat ";
 createFile(fileName);
 f = fopen ( fileName , "r" );
 fseeko ( f, 0L, SEEK_END );
 l = ftell ( f );
 fpos_t fsize;
 // get current position
 fgetpos(f, &fsize);
 printf ( " Довжина файлу %ld or %ld байтiв \n",l, fsize);

}

/*
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

off_t fsize(const char *filename) {
    struct stat st;

    if (stat(filename, &st) == 0)
        return st.st_size;

    fprintf(stderr, "Cannot determine size of %s: %s\n",
            filename, strerror(errno));

    return -1;
}

*/
