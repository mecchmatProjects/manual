    #include <stdio.h>
      main(argc, argv)
      int argc;
      char *argv[];
      {
        FILE *fp;
        static char buf [100];
                       /* сделаем stdprn небуферизованным */
        setvbuf(srdprn, NULL, _IONBF, 0);
        fprintf(stdprn, "unbuffered\n");
        if (argc == 2)              /* есть один аргумент */
            fp = fopen(argv[1], "w");
        else
            fp = stdout;  /* используем стандартный вывод */
        if (setvbuf(fp,buf,_IOLBF,sizeof(buf)))
            printf("setvbuf сработал неудачно\n");
        else
          {
            fprintf(fp, "Это передается в fp\n");
            fclose(fp);
          }
      }
