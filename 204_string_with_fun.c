// make a function which convert string inro upper case
#include <stdio.h>
void upper(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++) // 3
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}

void main()
{
    char str1[20] = "ram";
    char str2[20] = "raj";
    char str3[20] = "shyam";

    upper(str1);
    upper(str2);
    upper(str3);

    printf("Uppercase string 1 : %s\n", str1);
    printf("Uppercase string 2 : %s\n", str2);
    printf("Uppercase string 3 : %s\n", str3);
}