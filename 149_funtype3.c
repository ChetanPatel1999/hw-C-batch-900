// with return type , with parameter
#include <stdio.h>
int addition(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
float areaOfCircle(float radius)
{
    float area;
    area = 3.141 * radius * radius;
    return area;
}
int greatestNum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int factorial(int num)
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

void main()
{
    printf("max : %d\n", greatestNum(45, 8));
    printf("area of circle = %.2f\n", areaOfCircle(4.5));
    printf("res = %.2f\n", areaOfCircle(9.5));
    printf("circel area = %.2f\n", areaOfCircle(7));
    printf("res = %.2f\n", areaOfCircle(9.5));
    printf("sum = %d\n", addition(90, 10));
}
