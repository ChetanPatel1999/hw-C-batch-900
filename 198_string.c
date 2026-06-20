// how to take string from user
// fgets() :- we take string input from user
// fputs() :- we display string on output screen
#include <stdio.h>
void main()
{
    char city[50];
    printf("enter a city name : ");
    fgets(city, 50, stdin);
    fputs(city, stdout);
    printf("\nmy city = %s", city);
}