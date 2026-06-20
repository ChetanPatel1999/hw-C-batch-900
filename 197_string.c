// how to take string from user
// gets() :- we take string input from user
// puts() :- we display string on output screen
#include <stdio.h>
void main()
{
    char city[20];
    printf("enter a city name : ");
    gets(city);
    printf("my city name is : ");
    puts(city);
}