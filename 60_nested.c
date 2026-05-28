// 14. ATM Withdrawal – If account type is Savings or Current (choose with
// switch), check if balance is enough before withdrawal. (nested switch).
#include <stdio.h>
void main()
{
    int ac_type;
    printf("<--- welcome to ATM --->\n");
    printf("select account type : \n");
    printf("1. saving account\n");
    printf("2. current account \n");
    printf("press num : ");
    scanf("%d", &ac_type);
    switch (ac_type)
    {
    case 1:
        printf("ok! you select saving account : \n");
        int amount;
        printf("enter amount for withdraw : ");
        scanf("%d", &amount);
        if (amount <= 50000)
        {
            printf("you can withdraw");
        }
        else
        {
            printf("you can not withdraw");
        }
        break;
    case 2:
        printf("ok! you select current account : \n");
        printf("enter amount for withdraw : ");
        scanf("%d", &amount);
        if (amount <= 200000)
        {
            printf("you can withdraw");
        }
        else
        {
            printf("you can not withdraw");
        }
        break;

    default:
        printf("please select 1 or 2 only");
        break;
    }
}