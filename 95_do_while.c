#include <stdio.h>
void main()
{
    int num;
    do
    {
        printf("papa please purchesed new bike \n");
        printf("if papa not purchesed bike so enter 1: ");
        scanf("%d", &num); // 7
    } while (num == 1);

    printf("\nthanks papa for purchesed bike! \n");
}