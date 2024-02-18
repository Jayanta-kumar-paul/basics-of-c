// WAP in c to convert Decimal to Binary with Function. //   
#include <stdio.h>
void decToBinary(int num)
{
    int binaryNum[' ']; 
    int i = 1;
    while (num != 0)
    {
        binaryNum[i] = num % 2; 
        num /= 2;              
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j > 0; j--)
    {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}
int main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    decToBinary(num);
    return 0;
}
// Enter a decimal number: 15
// Binary representation: 1111