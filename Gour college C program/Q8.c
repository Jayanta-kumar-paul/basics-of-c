// 8. Write a program in C to check whether a given number is even or odd.
#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is an even number.\n", num);
    }
    else
    {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}
// Enter an integer: 20
// 20 is an even number.
