
//  12. Admission to a professional course is subject to the following conditions:
//  (a) Marks in Mathematics >= 60
//  (b) Marks in Computer Science >= 50
//  (c) Marks in Chemistry >= 40
//  (d) Total in all three subjects >= 200
//     or
//     Total in Mathematics and Computer Science >= 150
//     Given the marks in the three subjects,
//  i) Write a program to process the applications to list the eligible candidates using
//     nested if.

#include<stdio.h>

int main()
{
    int mathMarks, csMarks, chemMarks, totalMarks;

    printf("Enter marks in Mathematics: ");
    scanf("%d", &mathMarks);

    printf("Enter marks in Computer Science: ");
    scanf("%d", &csMarks);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemMarks);

    totalMarks = mathMarks + csMarks + chemMarks;   

    if (mathMarks >= 60 && csMarks >= 50 && chemMarks >= 40)
    {
        if (totalMarks >= 200 || (mathMarks + csMarks) >= 150) 
        {
            printf("Congratulations! You are eligible for admission.\n");
        }
        else
        {
            printf("Total marks not sufficient for admission.\n");
        }
    }
    else
    {
        printf("Marks in individual subjects not sufficient for admission.\n");
    }

    return 0;
}
// Enter marks in Mathematics: 70
// Enter marks in Computer Science: 85
// Enter marks in Chemistry: 40
// Congratulations! You are eligible for admission.
