// wap to print sum of all array elements.
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

    int sum = 0;
    for (i = 0; i < 5; i++) // 5
    {
        sum = sum + arr[i]; // 30
    }

    printf("\nsum of all array element : %d", sum);
}