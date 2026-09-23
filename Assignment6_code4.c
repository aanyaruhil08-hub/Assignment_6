/* Perfect Number
Write a C program to input a positive integer and determine whether it is a perfect number. A perfect number is equal to the sum of its positive divisors excluding itself. */

#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
    {
        printf("Perfect Number\n");
    }
    else
    {
        printf("Not a Perfect Number\n");
    }

    return 0;
}
