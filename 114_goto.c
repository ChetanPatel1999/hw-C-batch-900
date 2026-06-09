// wap to print 1 to 20 even  numbers using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter a num : ");
    scanf("%d", &n); // 4
start:
    printf("%d\n", n * i); // 2 4
    i++;                   // 6
    if (i <= 10)
    {
        goto start;
    }
}