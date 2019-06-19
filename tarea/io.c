#include<stdio.h>
#include<stdlib.h>

 int main (int argc, char *argv[]){
 char letra;
 int cursor; FILE *file = fopen(argv[1],"r");
  fseek(file, 0, SEEK_END);
  cursor= ftell(file);
   if(cursor ==0)
    return 0;
   for (cursor -= 1; cursor >=0; --cursor)
    {
  fseek(file,cursor, SEEK_SET);
  letra=fgetc(file);
  printf("%c",letra);
  }
 return 0;
 }
