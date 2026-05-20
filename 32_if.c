#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age); // 28
    printf("you can eat food\n");
    if (age >= 18)
    {
        printf("you can drive car\n");
        printf("you can voting\n");
    }
    printf("you can play game\n");
}