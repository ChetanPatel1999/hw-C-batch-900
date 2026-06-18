// . Write a program to find the maximum element in an array.
#include <stdio.h>
void main()
{
    int arr[5] = {300, 60, 40, 7, 55};
    int i;
    printf("display array element : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    int max = arr[0];
    // 300, 60, 40, 70, 55
    for (i = 0; i < 5; i++) // 4
    {
        if (max < arr[i])
        {
            max = arr[i]; // 70
        }
    }
    printf("\nmax element : %d", max);
}