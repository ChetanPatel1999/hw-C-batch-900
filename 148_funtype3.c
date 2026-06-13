// with return type , with parameter
// return type :- return type is a  just data type of value which
// return by function.
#include <stdio.h>
int addition(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void main()
{
    int res = addition(34, 10);
    printf("sum = %d\n", res);

    printf("sum = %d\n", addition(4, 9));
    printf("sum = %d\n", addition(90, 10));

    if (res > 50)
    {
        printf("res is greater then 50");
    }
    else
    {
        printf("res is less then 50");
    }
}
