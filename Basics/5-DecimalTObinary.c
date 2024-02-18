#include <stdio.h>
int main()
{
    int a[' '], i = 1, num;
    printf("Enter the Decimal number is: ");
    scanf("%d", &num);
    while (num != 0)
    {
        a[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary to given number: ");
    for (int j = i - 1; j > 0; j--)
    {
        printf("%d", a[j]);
    }
    return 0;
}
// Enter the Decimal number is: 16
// Binary to given number: 10000