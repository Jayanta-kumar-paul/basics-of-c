#include <stdio.h>
int fact(int num)
{
    int prod = 1;
    for (int i = num; i >= 1; i--)
    {
        prod = prod * i;
    }
    return (prod);
}
int main()
{
    int num;
    int factorial;
    printf("Emter the Factorial number: ");
    scanf("%d", &num);
    factorial = fact(num);
    printf("The Result is: %d", factorial);
    return 0;
}
// Emter the Factorial number: 3
// The Result is: 6