#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 7
    {
        if (i % 7 == 0)
        {
            break;
        }
        printf("%d ", i);
    }
}