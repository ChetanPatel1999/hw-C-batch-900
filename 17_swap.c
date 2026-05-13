//  Write a program to swap any two numbers using third variable.
#include <stdio.h>
void main()
{
    int a;
    int b;
    int c;
    printf("enter a = ");
    scanf("%d", &a);
    printf("enter b = ");
    scanf("%d", &b);

    printf("before swaping ...\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    c = a;
    a = b;
    b = c;

    printf("after swaping ...\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}