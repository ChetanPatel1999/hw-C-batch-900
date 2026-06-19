#include <stdio.h>
void main()
{
    // matrrix 3X2
    int mat[3][2] = {{12, 34}, {89, 66}, {99, 47}};

    printf("matrix element are : \n");
    int i, j;
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 2; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
