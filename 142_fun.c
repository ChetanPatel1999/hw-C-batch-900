#include <stdio.h>
void addition()
{
    int a, b, c;
    printf("this is addition fun : \n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void main()
{
    printf("main fun is start ...\n");
    addition();
    printf("again enter in main\n");
    addition();
    printf("main fun is end");
}