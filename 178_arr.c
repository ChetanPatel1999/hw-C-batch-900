// . Write a program to copy elements from one array to another.
#include <stdio.h>
void main()
{
    int arr1[5] = {12, 34, 56, 78, 90};
    int arr2[5];
    int i;

    // copy code from one array to another array
    for (i = 0; i < 5; i++) // 1
    {
        arr2[i] = arr1[i];
    }

    printf("enter array1 element : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nenter array2 element : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
}