#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && a < c) 
    {
        printf("%d is Smallest number\n", a);
    } 
    if (b < a && b < c) 
    {
        printf("%d is Smallest number\n", b);
    } 
    if (c < a && c < b) 
    {
        printf("%d is Smallest number\n", c);
    } 
    return 0;
}
// Enter three numbers: 20
// 40
// 60
// Smallest number is: 20
