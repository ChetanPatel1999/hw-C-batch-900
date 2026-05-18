#include <stdio.h>
void main()
{
    int res;
    // res = 12 > 7 && 4 == 4 && 34 > 99;
    // res = 12 > 77 || 4 == 12 || 34 > 99;

    // res = !(12 > 7);
    // res = !(12 == 7);
    res = !(12 == 12 && 3 == 3);
    printf("res = %d\n", res);
}