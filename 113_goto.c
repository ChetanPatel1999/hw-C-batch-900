// wap to print 1 to 20 even  numbers using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
start:
    if (i % 2 == 0)
    {
        printf("%d\n", i); // 2 4
    }
    i++; // 6
    if (i <= 20)
    {
        goto start;
    }
}