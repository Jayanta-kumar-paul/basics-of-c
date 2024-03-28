//  19. Write a program in C that takes a number as input and prints its factorial value using for
//      loop.
#include <stdio.h>

int main()
{
    int num, factorial = 1;

    printf("Enter the factorial number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    printf("The factorial number is:%2d", factorial);

    return 0;
}
// Enter the factorial number : 3
// The factorial number is: 6