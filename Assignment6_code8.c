/* Series Evaluation
Write a C program to input x and n and evaluate the following series:
                                  S = x − (x^2)/2! + (x^3)/3! − (x^4)/4! +⋯+(−1)^(n+1) (x^n)/n!.
Calculate powers and factorials using loops without using pow() or a separate user-defined function. */

#include <stdio.h>

int main()
{
    int n, i, j;
    float x, sum = 0.0;
    float power, factorial, term;

    printf("Enter the value of x and n: ");
    scanf("%f %d", &x, &n);

    for (i = 1; i <= n; i++)
    {
        power = 1;
        factorial = 1;

        /* Calculate x^i */
        for (j = 1; j <= i; j++)
        {
            power = power * x;
        }

        /* Calculate i! */
        for (j = 1; j <= i; j++)
        {
            factorial = factorial * j;
        }

        term = power / factorial;

        if (i % 2 == 1)
        {
            sum = sum + term;
        }
        else
        {
            sum = sum - term;
        }
    }

    printf("Sum = %.2f\n", sum);

    return 0;
}
