// Write a program to convert a string to uppercase.
#include <stdio.h>
void main()
{
    char str[20];
    printf("enter string : ");
    gets(str); // ABC
    printf("string : %s\n", str);

    // upercase convert code
    int i;
    for (i = 0; str[i] != '\0'; i++) // 3
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string : %s\n", str);
}