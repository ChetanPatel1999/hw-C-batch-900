// Write a program to display numbers squre 1 to n (given number).
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);         // 5
    for (i = 1; i <= n; i++) // 6
    {
        printf("square of %d = %d \n", i, i * i);
    }
}