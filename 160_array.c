#include <stdio.h>
void main()
{
    int arr[10] = {12, 34, 56, 78, 90, 33, 44, 55, 66, 77};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 10; i++) // 5
    {
        printf("%d ", arr[i]);
    }

    printf("\narray element are : \n");
    i = 0;
    while (i < 10)
    {
        printf("%d ", arr[i]);
        i++;
    }
}