//  Write a Program to accept user’s marital status, gender and age to check if
// he/she is eligible for marriage or not.
#include <stdio.h>
void main()
{
    int status, gender;
    printf("<--- welcome to marriage website --->\n");
    printf("select option : \n");
    printf("1. single \n");
    printf("2. marride \n");
    printf("press num : ");
    scanf("%d", &status);
    if (status == 1)
    {
        printf("select gender : \n");
        printf("1.female \n");
        printf("2. male \n");
        printf("press num : ");
        scanf("%d", &gender);
        if (gender == 1)
        {
            int age;
            printf("enter your age : ");
            scanf("%d", &age);
            if (age >= 18)
            {
                printf("you are eligible for marriage");
            }
            else
            {
                printf("you are not eligible for marriage");
            }
        }
        else if (gender == 2)
        {
            int age;
            printf("enter your age : ");
            scanf("%d", &age);
            if (age >= 21)
            {
                printf("you are eligible for marriage");
            }
            else
            {
                printf("you are not eligible for marriage");
            }
        }
        else
        {
            printf("please select 1 or 2 only");
        }
    }
    else if (status == 2)
    {
        printf("you allready marride");
    }
    else
    {
        printf("please select 1 or 2 only");
    }
}