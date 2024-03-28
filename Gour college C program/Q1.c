//1. Your basic salary is input through the keyboard. Your dearness allowance is 40%
// of the basic salary, and the house rent allowance is 20% of the basic salary.
// Write a program to calculate your gross salary.
#include <stdio.h>

int main()
{
    int basic_salary;
    float DA, HRA, Gross_salary;
    
    printf("Enter the Basic_salary is:");
    scanf("%d", &basic_salary);
    
    DA = 0.4 * basic_salary;
    
    HRA = 0.2 * basic_salary;
    
    Gross_salary = DA + HRA + basic_salary;
    
    printf("Total Gross salary is:%f", Gross_salary);
    
    return 0;
}
// Enter the Basic_salary is:10000
// Total Gross salary is:16000.000000