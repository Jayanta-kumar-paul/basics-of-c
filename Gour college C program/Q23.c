#include <stdio.h>

int main()
{
    int num;

    printf("Enter a positive number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("@ ");
        }
        
        printf("\n");
    }

    return 0;
}
// Enter a positive number : 4
// @ 
// @ @ 
// @ @ @ 
// @ @ @ @