/*
Write a C program to accept total marks of 10 students in a 1- dimensional array totalmarks[ ].
Calculate and print:
(a) The average of the total marks obtained by 10 students.
[average = (sum of total marks of all the students)/10]
(b) Deviation of each student's total marks with the average.
[deviation = total marks of a student - average]
*/
#include <stdio.h>

int main()
{
    int i, j, n = 10, count = 0;
    int totalmarks[n];

    printf("Enter %d numbers : ", n);

    // takes input
    for (i = 0; i < n; i++)
    {
        scanf("%d", &totalmarks[i]);
    }

    int sum = 0;
    float avg;

    for (i = 0; i < n; i++)
    {
        sum += totalmarks[i];
    }
    avg = sum / n;

    float deviation[n];

    for (i = 0; i < n; i++)
    {
        deviation[i] = totalmarks[i] - avg;
    }

    // printing result
    printf("Average : %f\n", avg);
    printf("Deviation : ");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", deviation[i]);
    }
    printf("\n");

    return 0;
}