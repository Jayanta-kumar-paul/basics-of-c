#include <stdio.h>

int main()
{
    FILE *fptr;  
    char ch = 'Y';

    fptr = fopen("INPUT.txt", "w");

    if (fptr == NULL)
    {
        printf("Unable to open the file for writing.\n");
        return 1;
    }

    while (ch == 'Y')
    {
       fprintf(fptr,"Jayanta\n") ; 
        printf("Enter another record (Y/N): ");
        scanf(" %c", &ch);  
       
    }

    fclose(fptr);


    return 0;
}