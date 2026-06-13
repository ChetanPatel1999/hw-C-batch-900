// no return type but with parameter
#include <stdio.h>
void addition(int a, int b)
{
    int c;
    c = a + b;
    printf("addition = %d\n", c);
}
void areaOfCircle(float radius)
{
    float area;
    area = 3.141 * radius * radius;
    printf("area of circle : %.2f\n", area);
}
void greatestNum(int a, int b)
{
    if (a > b)
    {
        printf("max : %d\n", a);
    }
    else
    {
        printf("max : %d\n", b);
    }
}

void factorial(int num)
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial = %d\n", fact);
}

void main()
{
    factorial(5);
    greatestNum(34, 89);
    greatestNum(340, 89);
    areaOfCircle(4.5);
    areaOfCircle(6.8);
    addition(12, 9);
    addition(4, 8);
    addition(40, 90);
}