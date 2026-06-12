#include <stdio.h>
void displayMSG(); // declaration
void greeting();
void main()
{
    greeting();
    printf("hello students \n");
    displayMSG(); // calling
    displayMSG();
}
void displayMSG() // defination
{
    printf("hi i am display MSG\n");
}
void greeting()
{
    printf("good morning \n");
}