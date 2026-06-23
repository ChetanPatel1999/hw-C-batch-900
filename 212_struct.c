#include <stdio.h>
#include <string.h>
struct pen
{
    char company[12]; // data member
    int price;
    float rating;
};

void main()
{
    struct pen p1, p2, p3;

    printf("enter pen1 info :\n");
    printf("enter pen company : ");
    scanf("%s", p1.company);
    printf("enter pen price : ");
    scanf("%d", &p1.price);
    printf("enter pen rating : ");
    scanf("%f", &p1.rating);

    printf("enter pen2 info :\n");
    printf("enter pen company : ");
    scanf("%s", p2.company);
    printf("enter pen price : ");
    scanf("%d", &p2.price);
    printf("enter pen rating : ");
    scanf("%f", &p2.rating);

    printf("\npen1 info : \n");
    printf("pen company : %s\n", p1.company);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n", p1.rating);

    printf("\n\npen2 info : \n");
    printf("pen company : %s\n", p2.company);
    printf("pen price : %d\n", p2.price);
    printf("pen rating : %.1f\n", p2.rating);
}