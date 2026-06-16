// wap to print table using recursion.
#include <stdio.h>
void table(int num)
{
    static int i = 1;
    printf("%d \n", num * i);
    i++; // 4
    if (i <= 10)
    {
        table(num);
    }
}
void main()
{
    table(9);
}