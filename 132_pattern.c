#include <stdio.h>
void main()
{
    int i, j;
    for (i = 97; i <= 101; i++) // 66
    {
        for (j = 97; j <= 101; j++) // 67
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}