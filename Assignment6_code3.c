/* Palindrome Number
Write a C program to input a positive integer and determine whether it is a palindrome using a loop. */

#include <stdio.h>

int main()
{
    int num, original, reverse = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    original = num;

    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
