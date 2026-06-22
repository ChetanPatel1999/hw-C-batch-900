// strcpy():- its copy one string data in another string
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[20] = "ram sharma";
    char str2[20];
    char str3[20];

    strcpy(str3, "rimzim");

    strcpy(str2, str1);

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);
}