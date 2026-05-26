// 11. Write a program using switch-case to check whether the entered character
// is a vowel or a consonant.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alpha : ");
    scanf("%c", &alpha); //e
    switch (alpha)
    {
      case 'a' :printf("vovle");break;
      case 'e' :printf("vovle");break;
      case 'i' :printf("vovle");break;
      case 'o' :printf("vovle");break;
      case 'u' :printf("vovle");break;
      default:printf("consonent");
    }
}