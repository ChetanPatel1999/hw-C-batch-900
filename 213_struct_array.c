#include <stdio.h>
#include <string.h>
struct pen
{
    char company[12];
    int price;
    float rating;
};

void main()
{
    struct pen p[5];

    int i;
    for (i = 0; i < 5; i++) // 1
    {
        printf("enter pen%d info :\n", i + 1);
        printf("enter pen company : ");
        scanf("%s", p[i].company);
        printf("enter pen price : ");
        scanf("%d", &p[i].price);
        printf("enter pen rating : ");
        scanf("%f", &p[i].rating);
    }

    for (i = 0; i < 5; i++) // 1
    {
        printf("\npen%d info : \n", i + 1);
        printf("pen company : %s\n", p[i].company);
        printf("pen price : %d\n", p[i].price);
        printf("pen rating : %.1f\n", p[i].rating);
    }
}