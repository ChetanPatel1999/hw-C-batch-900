// wap to print all number 1 to 30 excluding 7 multiple.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 30; i++) // 6
    {
        if (i % 7 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }
}