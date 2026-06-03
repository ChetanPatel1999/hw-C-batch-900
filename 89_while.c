// . Write a program to that takes a number as input and calculates the sum of
// only its even digits.
#include <stdio.h>
void main()
{
    int num, rem, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 342523
    while (num > 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            sum = sum + rem;
        }
        num = num / 10;
    }
    printf("sum of individual digit = %d", sum);
}