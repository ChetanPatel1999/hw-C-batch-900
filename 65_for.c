// Write a program to display number 1 to n (given number).
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 14
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}