#include <stdio.h>
void printNum()
{
    static int i = 1;
    printf("%d ", i);
    i++;
    if (i <= 10)
    {
        printNum();
    }
}
void main()
{
    printNum();
}