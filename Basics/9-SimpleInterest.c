#include <stdio.h>
int main()
{
    float principal, rate, time;
    float si; // si=simple interest
    printf("Enter the principal:");
    scanf("%f", &principal);
    printf("Enter the rate:");
    scanf("%f", &rate);
    printf("Enter the time:");
    scanf("%f", &time);
    si = (principal * rate * time) / 100;
    printf("The simple interest :%f", si);
    return 0;
}
// Enter the principal:2000
// Enter the rate:4
// Enter the time:2
// The simple interest :160.000000