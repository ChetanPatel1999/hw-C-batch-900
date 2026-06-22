// Write a program  to separate individual characters from a string (like:- h e l l o  w o r l d  i n s t i t u t e).
#include <stdio.h>
void main()
{
    char city[30];
    printf("enter city : ");
    gets(city); // indore
    printf("city name = %s\n", city);
    int i;
    for (i = 0; city[i] != '\0'; i++)
    {
        printf("%c ", city[i]);
    }
}