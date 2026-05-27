// club mini project
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 10
    if (age >= 18)
    {
        printf("welcome to my club ...\n");
        printf("club menu :\n");
        printf("1. noodles : 80 rs\n");
        printf("2. sandwitch : 120 rs\n");
        printf("3. cold coffe : 100 rs\n");
        printf("select item : ");
        scanf("%d", &order);
        if (order == 1)
        {
            printf("your noodles is orderd please pay 80 rs\n");
        }
        else if (order == 2)
        {
            printf("your sandwitch is orderd please pay 120 rs\n");
        }
        else if (order == 3)
        {
            printf("your cold coffe is orderd please pay 100 rs\n");
        }
        else
        {
            printf("please select number 1 to 3\n");
        }
    }
    else
    {
        printf("your entry is not allowed please try aftre %d year ", 18 - age);
    }
}