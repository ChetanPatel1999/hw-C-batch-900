// wap to convert a lower alphabet in uper case alphabet.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a lower alphabet = ");
    scanf("%c", &ch);
    ch = ch - 32;
    printf("uper alphabet = %c", ch);
}