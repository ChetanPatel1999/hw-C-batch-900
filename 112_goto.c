// wap to print 1 to 10 numbers using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
start:
    printf("%d\n", i);
    i++;
    if (i <= 10)
    {
        goto start;
    }
}