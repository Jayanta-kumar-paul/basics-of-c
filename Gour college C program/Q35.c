#include <stdio.h>
  int main()
{
   FILE *fptr;
   char c;
   printf("Data Input \n\n");
   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("Input","w");
   while ((c=getchar)!=EOF)
   putc(c,fptr);
   fclose(fptr);
   printf("\n Data output\n\n");
   fptr=fopen("Input","r");
   while ((c=getc(fptr))!=EOF)
   printf("%c",c);

   fclose(fptr);
   return 0;

}