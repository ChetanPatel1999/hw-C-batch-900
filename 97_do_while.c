// club mini project
#include <stdio.h>
void main()
{
    int age, order, p, c1 = 0, c2 = 0, c3 = 0;
    printf("enter your age : ");
    scanf("%d", &age); // 10
    if (age >= 18)
    {
        printf("welcome to my club ...\n");

        do
        {
            printf("club menu :\n");
            printf("1. noodles : 80 rs\n");
            printf("2. sandwitch : 120 rs\n");
            printf("3. cold coffe : 100 rs\n");
            printf("select item : ");
            scanf("%d", &order);
            if (order == 1)
            {
                printf("your noodles is orderd\n");
                c1++;
            }
            else if (order == 2)
            {
                printf("your sandwitch is orderd \n");
                c2++;
            }
            else if (order == 3)
            {
                printf("your cold coffe is orderd \n");
                c3++;
            }
            else
            {
                printf("please select number 1 to 3\n");
            }

            printf("you want to order something else press 1 : ");
            scanf("%d", &p);

        } while (p == 1);

        int total = c1 * 80 + c2 * 120 + c3 * 100;
        printf("\n\n<------------------- sir/mem your bill------------------>\n");
        printf("      item         price        quantity       total  \n");
        printf("     noodles        80           %d             %d  \n", c1, c1 * 80);
        printf("     sandwitch      120          %d             %d  \n", c2, c2 * 120);
        printf("     cold cofee     100          %d             %d  \n", c3, c3 * 100);
        printf("---------------------------------------------------------\n");
        printf("                     total bill : %d\n", total);
        printf("---------------------------------------------------------\n");
        printf("<-------------------thanks/visit again--------------------->\n\n");
    }
    else
    {
        printf("your entry is not allowed please try aftre %d year ", 18 - age);
    }
}