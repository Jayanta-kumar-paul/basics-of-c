#include <stdio.h>

int main()
{
    float nCr;
    int n, r, fact_n = 1, fact_r = 1, fact_nr = 1;

    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the value of r : ");
    scanf("%d", &r);

    for (int i = 1; i <= n; i++)
    {
        fact_n = fact_n * i;
    }
    for (int i = 1; i <= r; i++)
    {
        fact_r = fact_r * i;
    }
    for (int i = 1; i <= n - r; i++)
    {
        fact_nr = fact_nr * i;
    }

    nCr = fact_n / (fact_r * fact_nr);

    printf("%dC%d is %f\n", n, r, nCr);

    return 0;
}
// Enter the value of n : 5
// Enter the value of r : 2
// 5C2 is 10.000000