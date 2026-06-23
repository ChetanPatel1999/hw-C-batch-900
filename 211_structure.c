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

    strcpy(p1.company, "cello");
    p1.price = 10;
    p1.rating = 3.6;

    strcpy(p2.company, "parker");
    p2.price = 20;
    p2.rating = 4.6;

    printf("pen1 info : \n");
    printf("pen company : %s\n", p1.company);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n", p1.rating);

    printf("\n\npen2 info : \n");
    printf("pen company : %s\n", p2.company);
    printf("pen price : %d\n", p2.price);
    printf("pen rating : %.1f\n", p2.rating);
}