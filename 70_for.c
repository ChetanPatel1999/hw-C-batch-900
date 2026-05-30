//Write a program to display multiple of 7 between 1 to n.
#include <stdio.h>
void main()
{
    int i, s, e;
    printf("enter a starting range : ");
    scanf("%d", &s); // 8
    printf("enter a ending range : ");
    scanf("%d", &e);         // 20
    for (i = s; i <= e; i++) // 9
    {
        printf("%d ", i);
    }
}