/* Menu-Driven Number Operations
Write a C program that repeatedly displays the following menu:
1. Check Palindrome
2. Check Armstrong Number
3. Check Prime Number
4. Find Sum of Digits
5. Count the number of Digits of an integer
6. Exit
*/

#include <stdio.h>

int main()
{
    int choice, num, temp;
    int reverse, remainder;
    int sum, digit;
    int count, i;
    int isPrime;

    do
    {
        printf("\n------ MENU ------\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count Number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                temp = num;
                reverse = 0;

                while (temp > 0)
                {
                    remainder = temp % 10;
                    reverse = reverse * 10 + remainder;
                    temp = temp / 10;
                }

                if (reverse == num)
                    printf("Palindrome\n");
                else
                    printf("Not Palindrome\n");

                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                temp = num;
                sum = 0;

                while (temp > 0)
                {
                    digit = temp % 10;
                    sum = sum + digit * digit * digit;
                    temp = temp / 10;
                }

                if (sum == num)
                    printf("Armstrong Number\n");
                else
                    printf("Not Armstrong Number\n");

                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);

                isPrime = 1;

                if (num <= 1)
                {
                    isPrime = 0;
                }
                else
                {
                    for (i = 2; i < num; i++)
                    {
                        if (num % i == 0)
                        {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime)
                    printf("Prime Number\n");
                else
                    printf("Not Prime Number\n");

                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);

                temp = num;
                sum = 0;

                while (temp > 0)
                {
                    sum = sum + temp % 10;
                    temp = temp / 10;
                }

                printf("Sum of digits = %d\n", sum);

                break;

            case 5:
                printf("Enter a number: ");
                scanf("%d", &num);

                temp = num;
                count = 0;

                while (temp > 0)
                {
                    count++;
                    temp = temp / 10;
                }

                printf("Number of digits = %d\n", count);

                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 6);

    return 0;
}