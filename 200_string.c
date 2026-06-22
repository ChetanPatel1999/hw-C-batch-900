// Write a program to find the length of a string without using built-in functions.
#include <stdio.h>
void main()
{
    char str[20];
    printf("enter string : ");
    gets(str); // ram
    printf("string : %s\n", str);

    // string length code
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) // 3
    {
        count++;
    }

    printf("string length = %d", count);
}