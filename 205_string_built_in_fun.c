// strlen() :- its return string length
#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    printf("enter string : ");
    gets(str);
    printf("string : %s\n", str);
    printf("string length = %d\n", strlen(str));
}