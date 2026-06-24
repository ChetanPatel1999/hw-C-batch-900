#include <stdio.h>
void main()
{
    int a = 12;
    char ch;
    double d;
    printf("value a= %d\n", a);
    printf("address of a= %d\n", &a);
    printf("size of a= %d\n", sizeof(a));
    printf("size of ch= %d\n", sizeof(ch));
    printf("size of float= %d\n", sizeof(float));
    printf("size of double= %d\n", sizeof(d));
}
