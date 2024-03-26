//  7. If a four-digit number is input through the keyboard, write a program to obtain the sum of
//  this number's first and last digits
#include <stdio.h>

int main()
{
    int num, firstDigit, lastDigit, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    firstDigit = num / 1000;

    sum = firstDigit + lastDigit;

    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}
// Enter a four-digit number: 8644
// Sum of the first and last digits: 12