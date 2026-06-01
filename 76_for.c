// wap to print factors count of given number.
#include <stdio.h>
void main()
{
    int i, n, c = 0;
    printf("enter a num : ");
    scanf("%d", &n);         // 15
    for (i = 1; i <= n; i++) // 15
    {
        if (n % i == 0)
        {
            c++; // 4
        }
    }
    printf("total factor count = %d ", c);
}