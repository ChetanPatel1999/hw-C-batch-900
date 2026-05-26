// Write a program using switch-case to print your friend's name based on the
// first letter of their name.
#include <stdio.h>
void main()
{
    char firstLater;
    printf("enter first later of your friend name : ");
    scanf("%c", &firstLater); // p
    switch(firstLater)
    {
        case 'r' : printf("ritika dingra");break;
        case 'm' :printf("manshi mukati");break;
        case 'd' :printf("dhairya pal");break;
        case 'a' :printf("amatullah rahi");break;
        case 's' :printf("sanjhi jat");break;
        default: printf("you not have any friend which name start with %c ",firstLater);

    }
}