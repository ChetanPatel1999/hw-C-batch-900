#include <stdio.h>
void main()
{
    int arr[5] = {4, 6, 5, 8, 7};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    arr[2] = 90;
    arr[4] = 34;

    printf("\nafter chnage array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}