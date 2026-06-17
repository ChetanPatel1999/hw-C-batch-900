// wap to take array element from user and display sum.
#include <stdio.h>
void main()
{
    int arr[5];
    int i;

    printf("enter array elements : \n");
    for (i = 0; i < 5; i++) // 1
    {
        scanf("%d", &arr[i]);
    }

    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nsum of all array element : %d", sum);
    printf("\naverage of all array element : %.2f", sum / 5.0);
}