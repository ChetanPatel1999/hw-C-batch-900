// with return type but no parameter
#include <stdio.h>
int addition()
{
    int a, b, c;
    printf("enter  a : ");
    scanf("%d", &a);
    printf("enter  b : ");
    scanf("%d", &b);
    c = a + b;
    return c;
}
void main()
{
    int res = addition();
    printf("sum = %d\n", res);
    printf("sum = %d\n", addition());
}