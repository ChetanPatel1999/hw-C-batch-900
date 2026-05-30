// Write a program to display even number series.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 20
    printf("even number serise : ");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d ", i);
        }
    }
}