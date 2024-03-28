//  23. Write a program to print the following patterns. The user will provide the no of lines.
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number of rows : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num + 1 - i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
// Enter a number of rows : 4
// * * * *
// * * *
// * *
// *