#include<stdio.h>
int main ()
{
    int num;

    printf("Enter a number of rows : ");
    scanf("%d",&num);

    for (int i=1;i<=num;i++)
    {
        for (int j=1;j=num-i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}