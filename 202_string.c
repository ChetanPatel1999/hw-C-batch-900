// Write a program to count the number of words in a string.
#include <stdio.h>
void main()
{
    char str[20];
    printf("enter string : ");
    gets(str); // my name is chetan patel
    printf("string : %s\n", str);
    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++) // 3
    {
        if (str[i] == ' ')
        {
            c++;
        }
    }
    printf("total word in string : %d", c + 1);
}