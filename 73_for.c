// Write a program to display sum 1 to n  ( given number) only even numbers
// sum.
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("enter a num : ");
    scanf("%d", &n);         // 10
    for (i = 1; i <= n; i++) //
    {
        if (i % 2 == 0)
        {
            sum = sum + i; //
        }
    }
    printf("sum of even value 1 to %d = %d\n", n, sum);
}