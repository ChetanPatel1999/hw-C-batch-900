#include <stdio.h>
void main()
{
    // matrix 2X2
    int mat[2][2] = {{12, 34}, {89, 66}};

    printf("matrix element are : \n");
    int i, j;
    for (i = 0; i < 2; i++) // 1
    {
        for (j = 0; j < 2; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
