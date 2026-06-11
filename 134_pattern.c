#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++) // 3
    {
        for (j = 1; j <= 4; j++) // 3
        {
            if (i > 2)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}