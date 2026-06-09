#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)
        {
            i++; // 6
            continue;
        }
        printf("%d ", i); // 1 2 3 4 6 7
        i++;              // 8
    }
}