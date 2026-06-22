// strupr() :- its convert string in upper case
#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    printf("enter string : ");
    gets(str);
    printf("string : %s\n", str);
    // strupr(str);
    strlwr(str);
    // printf("upper case string : %s\n", str);
    printf("lower case string : %s\n", str);
}