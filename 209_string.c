// strcat():- its combine(concate) two string and assign in first string
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[20] = "ram";
    char str2[20] = "sharma";

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    strcat(str1, str2);

    printf("str1 = %s\n", str1); // ramsharma
    printf("str2 = %s\n", str2); // sharma
}