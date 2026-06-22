// strcmp():- its compare two strings are same or different if two
//  string data are same its return 0 or different its return 1.
// strcmp("ram","ram") ----> 0
// strcmp("ram","raj") ----> 1

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[20];
    char str2[20];
    printf("enter str1 : ");
    gets(str1);
    printf("enter str2 : ");
    gets(str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}