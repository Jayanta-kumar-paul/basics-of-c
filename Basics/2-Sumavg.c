// Write a program in c to sum and avarage in three integers//
#include <stdio.h>
int main()
{
    int x, y, z, sum, avg;
    printf("Enter the First integer:");
    scanf("%d", &x);
    printf("Enter the Second integer:");
    scanf("%d", &y);
    printf("Enter the Third integer:");
    scanf("%d", &z);
    sum = x + y + z;
    avg = sum / 3;
    printf("The sum is:%d\n", sum);
    printf("The avarage is:%d\n", avg);
    return 0;
}
// Enter the First integer:2
// Enter the Second integer:4
// Enter the Third integer:6
// The sum is:12
// The avarage is:4