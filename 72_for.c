//  Write a program to display sum 1 to n ( given number) and also display average.
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("enter a num : ");
    scanf("%d", &n);         // 5
    for (i = 1; i <= n; i++) //
    {
        sum = sum + i;
    }
    printf("sum of 1 to %d = %d\n", n, sum);
    printf("average of 1 to %d = %.2f ", n, sum / (float)n);
}