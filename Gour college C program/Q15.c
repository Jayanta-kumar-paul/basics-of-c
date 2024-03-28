// 15. Write a program to find the smallest numbers from any three given numbers using the
//     conditional (ternary) operator.
#include <stdio.h>

int main()
{
    int a, b, c, smallest;

    printf("Enter the first integers :");
    scanf("%d", &a);
    printf("Enter the second integers :");
    scanf("%d", &b);
    printf("Enter the third integers :");
    scanf("%d", &c);

    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("%d is a smallest number.", smallest);

    return 0;
}
// Enter the first integers :03
// Enter the second integers :04
// Enter the third integers :05
// 3 is a smallest number.