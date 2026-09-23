/* Pascal’s Triangle
Write a C program to input the number of rows and display Pascal’s Triangle using nested loops.
For n = 5, the output should be:
         1
      1    1
    1   2   1
  1   3   3   1
1   4   6   4   1
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    int value;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        /* Print leading spaces */
        for (j = 0; j < n - i - 1; j++)
        {
            printf("  ");
        }

        value = 1;

        /* Print Pascal's Triangle values */
        for (j = 0; j <= i; j++)
        {
            printf("%4d", value);

            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}