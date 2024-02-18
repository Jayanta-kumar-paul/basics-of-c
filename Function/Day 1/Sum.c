#include <stdio.h>
int addition(int x, int y)
{
    int z;
    z = x + y;
    return (z);
}
int main()
{
    int a, b, sum;
    printf("Enter the first integer:");
    scanf("%d", &a);
    printf("Enter the second integer:");
    scanf("%d", &b);
    sum = addition(a, b);
    printf("sum: %d", sum);
    return 0;
}
// Enter the first integer:15
// Enter the second integer:12
// sum: 27