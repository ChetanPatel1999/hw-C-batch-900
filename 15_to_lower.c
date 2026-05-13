// wap to convert a upercase alphabet in lower case alphabet.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a upper alphabet = ");
    scanf("%c", &ch); 
    ch = ch + 32;
    printf("lower alphabet = %c", ch);
}