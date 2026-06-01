// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int i, n, c = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 17
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++; // 2
        }
    }

    if (c == 2)
    {
        printf("num is prime");
    }
    else
    {
        printf("num is not prime");
    }
}