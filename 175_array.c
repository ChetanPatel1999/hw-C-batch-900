//  Write a program to count how many even numbers are present in an array.
#include <stdio.h>
void main()
{
    int n;
    printf("enter length of array : ");
    scanf("%d", &n); // 5
    int arr[n], i;
    printf("enter array element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("display array element : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }

    printf("\ntotal even element : %d\n", count);
}