#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
   
   FILE* fp;
   fp = fopen("sample.txt", "w");
   char str[50];
   
   printf("input a word: ");
   scanf("%s", str);
   fprintf(fp, "%s\n", str);
   
   printf("input a word: ");
   scanf("%s", str);
   fprintf(fp, "%s\n", str);
   
   printf("input a word: ");
   scanf("%s", str);
   fprintf(fp, "%s\n", str);
   
   fclose(fp);   
}
