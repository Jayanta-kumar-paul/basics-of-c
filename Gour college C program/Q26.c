//  26. Write a C function to find the value of nPr. [fact(n)/fact(n-r)]
#include <stdio.h>

int main()
{
    float nPr;
    int n, r, fact_n = 1, fact_nr = 1;

    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the value of r : ");
    scanf("%d", &r);

    for (int i = 1; i <= n; i++)
    {
        fact_n = fact_n * i;
    }

    for (int i = 1; i <= n - r; i++)
    {
        fact_nr = fact_nr * i;
    }

    nPr = fact_n / fact_nr;

    printf("%dP%d is %f\n", n, r, nPr);

    return 0;
}
// Enter the value of n : 5
// Enter the value of r : 2
// 5p2 is 20.000000