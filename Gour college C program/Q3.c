#include <stdio.h>
int main()
{
    int Farenheit;
    float Centigrade;
    printf("Enter the tempareture in farenheit:");
    scanf("%d", &Farenheit);
    Centigrade = ((Farenheit - 32) * 5) / 9;
    printf("Centigrade tempareture is:%f", Centigrade);
    return 0;
}
// Enter the tempareture in farenheit:10
// Centigrade tempareture is:-12.000000