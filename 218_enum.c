#include <stdio.h>
enum days
{
    mon = 12,
    tue,
    wed,
    thu = 60,
    fri,
    sat,
    sun
};

void main()
{
    printf("mon = %d\n", mon);
    printf("tue = %d\n", tue);
    printf("wed = %d\n", wed);
    printf("thu = %d\n", thu);
    printf("fri = %d\n", fri);
    printf("sat = %d\n", sat);
    printf("sun = %d\n", sun);
}