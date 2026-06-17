// array address example
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    printf("array element address are : \n");
    printf("%d ", arr);     // base address
    printf("%d ", &arr[0]); // base address
    printf("%d ", &arr[1]);
    printf("%d ", &arr[2]);
    printf("%d ", &arr[3]);
    printf("%d ", &arr[4]);
}