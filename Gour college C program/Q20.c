#include<stdio.h>
int main ()
{
    int num,digit,sum=0;

    printf("Enter a positive integers: ");
    scanf("%d",&num);

    int temp=num;
    do{
        digit=temp%10;
        sum+=digit;
        temp/=10;
    }while(temp>0);

    printf("Sum of digit:%2d\n",sum);
    return 0;

}