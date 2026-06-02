// wap to print 1 to n cubes.
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter n : ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("cube of %d = %d \n", i, i * i * i);
        i++;
    }
}