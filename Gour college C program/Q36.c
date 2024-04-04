#include <stdio.h>
struct emp
{
    char name[40];
    int age;
    float bs;
};

int main()
{
    FILE *fptr;  
    struct emp e;
    char ch = 'Y';

    fptr = fopen("EMP.txt", "w");

    if (fptr == NULL)
    {
        printf("Unable to open the file for writing.\n");
        return 1;
    }

    while (ch == 'Y')
    {
        printf("Enter a name: ");
        scanf("%s", e.name);
        printf("Enter an age: ");
        scanf("%d", &e.age);
        printf("Enter a salary: ");
        scanf("%f", &e.bs);  
        printf("Enter another record (Y/N): ");
        scanf(" %c", &ch);  
        fprintf(fptr, "%s %d %.2f\n", e.name, e.age, e.bs);  
    }

    fclose(fptr);

    fptr = fopen("EMP.txt", "r");

    if (fptr == NULL)
    {
        printf("Unable to open the file for reading.\n");
        return 1;
    }

    printf("\nRecords from the file:\n");

    while (fscanf(fptr, "%s %d %f", e.name, &e.age, &e.bs) == 3)
    {
        printf("%s %d %.2f\n", e.name, e.age, e.bs);
    }

    fclose(fptr);

    return 0;
}