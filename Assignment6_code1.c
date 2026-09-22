/* Multiplication Table
Write a C program that accepts an integer from the user and displays its multiplication table from 1 to 10 using a for loop. /


#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence:\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

    
}