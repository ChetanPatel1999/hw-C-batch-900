// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a value --> ");
    scanf("%d", &a); // 56
    printf("enter b value --> ");
    scanf("%d", &b); // 8

    if (a > b)
    {
        printf("greates num = %d", a);
    }
    else
    {
        printf("greates num = %d", b);
    }
}