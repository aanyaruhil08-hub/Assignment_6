/* Decimal-to-Binary Conversion
Write a C program to input a positive decimal integer and convert it into binary using a loop. Do not use arrays, strings, or library conversion functions. */

#include <stdio.h>

int main()
{
    int num, remainder;
    long long binary = 0, place = 1;

    printf("Enter a positive decimal number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        remainder = num % 2;
        binary = binary + (remainder * place);

        place = place * 10;
        num = num / 2;
    }

    printf("Binary = %lld\n", binary);

    return 0;
}
