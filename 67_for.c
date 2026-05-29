//  Write a program to display table of given number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) // 4
    {
        printf("%d \n", n * i);
    }
}