// wap to print 1 to 20 even  numbers using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
    printf("%d\n", i);
    i++; // 2
    if (i <= 10)
    {
        goto start;
    }
    printf("stmnt 1\n");
    printf("stmnt 2\n");
    printf("stmnt 3\n");
start:
    printf("after start ");
}