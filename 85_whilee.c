// wap to print table of given number.
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter n : ");
    scanf("%d", &n); // 5
    while (i <= 10)
    {
        printf("%d\n", n * i);
        i++;
    }
}