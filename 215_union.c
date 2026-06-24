#include <stdio.h>
#include <string.h>
union pen
{
    char company[12]; // data member
    int price;
    float rating;
};

void main()
{
    union pen p1, p2, p3;

    printf("size of struct pen = %d\n", sizeof(p1));

    printf("pen1 info : \n");
    p1.rating = 3.6;
    p1.price = 10;
    strcpy(p1.company, "cello");

    printf("pen company : %s\n", p1.company);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n", p1.rating);

    printf("\n\npen2 info : \n");
    p2.rating = 5.6;
    printf("pen rating : %.1f\n", p2.rating);
    p2.price = 20;
    printf("pen price : %d\n", p2.price);
    strcpy(p2.company, "parker");
    printf("pen company : %s\n", p2.company);
}