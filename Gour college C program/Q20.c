//  20. Write a program in C that takes a number as input and prints the sum of the digits of the number using do while loop.
#include <stdio.h>

int main()
{
    int num, digit, sum = 0;

    printf("Enter a positive integers: ");
    scanf("%d", &num);

    int temp = num;
    do
    {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    } while (temp > 0);

    printf("Sum of digit:%2d\n", sum);

    return 0;
}
// Enter a positive integers: 234
// Sum of digit: 9