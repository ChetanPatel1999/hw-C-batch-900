// strrev() :- its convert string in reverse formate
#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    printf("enter string : ");
    gets(str);
    printf("string : %s\n", str);
    strrev(str);
    printf("reveres string : %s\n", str);
}