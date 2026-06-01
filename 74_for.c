//  Write a program to display lowercase alphabet a to z.
// a b c d e f g h ..... z
#include <stdio.h>
void main()
{
    char i;
    for (i = 'a'; i <= 'z'; i++) // b
    {
        printf("%c ", i);
    }

    printf("\n");

    for (i = 97; i <= 122; i++) // b
    {
        printf("%c ", i);
    }
}