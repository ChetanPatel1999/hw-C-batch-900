// how to take string from user
#include <stdio.h>
void main()
{
    char city[20];
    printf("enter a city name : ");
    scanf("%[^\n]s", city);

    printf("my city name = %s\n", city);


}