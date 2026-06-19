#include <stdio.h>
void main()
{
    // matrrix 3X3
    int mat[3][3] = {{12, 34, 56}, {89, 66, 44}, {99, 47, 23}};

    printf("matrix element are : \n");
    int i, j;
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
