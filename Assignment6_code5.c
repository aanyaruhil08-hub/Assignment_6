/* Prime Numbers in a Range
Write a C program to input two integers representing the lower and upper limits. Display all prime numbers within the given range and print the total number of prime numbers found. Use nested loops. */

#include <stdio.h>

int main()
{
    int lower, upper;
    int i, j, count = 0;
    int isPrime;

    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers are:\n");

    for (i = lower; i <= upper; i++)
    {
        if (i <= 1)
        {
            continue;
        }

        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal prime numbers = %d\n", count);

    return 0;
}
