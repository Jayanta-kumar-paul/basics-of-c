#include <stdio.h>

int main()
{
    int num, digit;

    printf("Enter the number :");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        printf("%d", digit);
        num /= 10;
    }

    return 0;
}
// Enter the number :234
// 432