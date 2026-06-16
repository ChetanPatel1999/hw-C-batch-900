#include <stdio.h>
void evenNums()
{
    static int i = 1;
    if (i % 2 == 0)
    {
        printf("%d ", i);
    }
    i++; // 4
    if (i <= 20)
    {
        evenNums();
    }
}
void main()
{
    evenNums();
}