#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 1
    {
        for (j = 1; j <= 5; j++) // 3
        {
            if (i % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}