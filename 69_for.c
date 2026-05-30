//  Write a program to display multiple of 7 between 1 to n.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 20
    for (i = 1; i <= n; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d ", i);
        }
    }
}