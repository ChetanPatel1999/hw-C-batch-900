// wap to print day name according to number.
#include <stdio.h>
void main()
{
    int day;
    printf("enter a num for day : ");
    scanf("%d", &day);// 6
    switch (day)
    {
        case 1: printf("monday\n");break;
        case 2: printf("tuesday\n");break;
        case 3: printf("wednusday\n");break;
        case 4: printf("thurdsday\n");break;
        case 5: printf("friday\n");break;
        case 6: printf("saturday\n");break;
        case 7: printf("sunday\n");break;
        default:printf("please enter 1 to 7");break;
    }
}