//  14. Write a program to find the larger of two numbers from any two given numbers using the
//      conditional (ternary) operator.
#include <stdio.h>

int main()
{
    int a, b, largest;

    printf("Enter the first integers :");
    scanf("%d", &a);
    printf("Enter the second integers :");
    scanf("%d", &b);

    largest = (a > b) ? a : b;

    printf("%d is a largest number.", largest);
    
    return 0;
}
// Enter the first integers :10
// Enter the second integers :30
// 30 is a largest number.