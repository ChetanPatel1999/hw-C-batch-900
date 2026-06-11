#include <stdio.h>
void main()
{
    int i, j;
    for (i = 69; i >= 65; i--) // 66
    {
        for (j = i; j >= 65; j--) // 67
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}