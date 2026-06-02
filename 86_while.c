// wap to print even numbers 1 to n.
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter n : ");
    scanf("%d", &n); // 20
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}