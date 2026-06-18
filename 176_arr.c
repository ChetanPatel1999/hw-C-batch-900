//  Write a program to print squares of all numbers present in a given array.
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

    // 2 4 5 3 7
    printf("\ndisplay array element square are: \n");
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", arr[i] * arr[i]);
    }
}