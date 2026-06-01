// Write a program to check given number is perfact or not.
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 12
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i; // 28
        }
    }

    if (n * 2 == sum)
    {
        printf("num is perfact number");
    }
    else
    {
        printf("num is not perfact");
    }
}