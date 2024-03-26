// 10. WAP in C to find the smallest number from any three given numbers.
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);
    printf("Enter third numbers: ");
    scanf("%d", &c);
    
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
