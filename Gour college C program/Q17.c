// 17. Write a program in C to print the multiplication table of any number.
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a positive  integer: ");
    scanf("%d", &number);

    printf("Multiplication table for %d:\n", number);
   
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
// Enter a positive integer: 8
// Multiplication table for 8:
// 8 x 1 = 8
// 8 x 2 = 16
// 8 x 3 = 24
// 8 x 4 = 32
// 8 x 5 = 40
// 8 x 6 = 48
// 8 x 7 = 56
// 8 x 8 = 64
// 8 x 9 = 72
// 8 x 10 = 80
