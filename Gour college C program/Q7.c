#include <stdio.h>

int main()
{
    int num, firstDigit, lastDigit, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    // Extract the first and last digits
    lastDigit = num % 10;
    firstDigit = num / 1000;

    // Calculate the sum
    sum = firstDigit + lastDigit;

    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}
// Enter a four-digit number: 8644
// Sum of the first and last digits: 12