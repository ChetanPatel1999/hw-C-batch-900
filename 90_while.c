// 6. Write a program that takes a number as input and counts how many odd
// digits it contains.
#include <stdio.h>
void main()
{
    int num, rem, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 738
    while (num > 0)
    {
        c++; // 3
        num = num / 10;
    }
    printf("total digit in number : %d", c);
}