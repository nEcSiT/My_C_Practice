#include <stdio.h>

/**
 * main - entry into the code
 * Question- Write a program that reads the score of 5 students,sum the score and calculate the average of their score.
 * Using arrays
 * Loops and Nested loops
 * Return: 0
*/

void main()
{
    int student[5], sum = 0;
    int i, b;
    float average;

    for (i = 0; i < 5; i++)
    {
        while (b < 5)
        {
            scanf("%d", &student[b]);
        }
        sum = sum + student[i];
    }

    printf("The sum of the scores of the students is %d\n", sum);

    average = sum / 5;
    printf("The total average score of the student is %-0.2f\n", average);

    return;
}