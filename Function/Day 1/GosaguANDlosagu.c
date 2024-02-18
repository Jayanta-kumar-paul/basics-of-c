#include <stdio.h>
int gcd(int a, int b, int c)
{
    int g;
    for (int i = 1; i <= a + b + c; i++)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0)
        {
            g = i;
        }
    }
    return (g);
}
int lcm(int a, int b, int c)
{
    int l;
    for (int i = 1; i <= a * b * c; i++)
    {
        if (i % a == 0 && i % b == 0 && i % c == 0)
        {
            l = i;
            break;
        }
    }
    return (l);
}
int main()
{
    int a, b, c, gcd1, lcm1;
    printf("Enter the first number integer: ");
    scanf("%d", &a);
    printf("Enter the second number integer: ");
    scanf("%d", &b);
    printf("Enter the third number integer: ");
    scanf("%d", &c);
    gcd1 = gcd(a, b, c);
    lcm1 = lcm(a, b, c);
    printf("GCD result is: %d\n", gcd1);
    printf("LCM result is: %d\n", lcm1);
    return 0;
}
// Enter the first number integer: 5
// Enter the second number integer: 10
// Enter the third number integer: 15
// GCD result is: 5
// LCM result is: 30