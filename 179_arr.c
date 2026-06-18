// . Write a program to make a new array which contain squre of input array.
#include <stdio.h>
void main()
{
    int arr1[5] = {12, 34, 56, 78, 90};
    int arr2[5];
    int i;

    // copy code from one array to another array
    for (i = 0; i < 5; i++) // 1
    {
        arr2[i] = arr1[i] * arr1[i];
    }

    printf("display array1 element : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\ndisplay array2 element : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
}