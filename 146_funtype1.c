// no return type , no paramter
#include <stdio.h>
void addition()
{
    int a, b, c;
    printf("this is addition fun : \n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void areaOfCircle()
{
    float radius, area;
    printf("enter radius : ");
    scanf("%f", &radius);
    area = 3.141 * radius * radius;
    printf("area of circle : %.2f", area);
}
void greatestNum()
{
    int a, b;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("max : %d", a);
    }
    else
    {
        printf("max : %d", b);
    }
}
void factorial()
{
    int num, fact = 1, i;
    printf("enter a num : ");
    scanf("%d", &num); // 4
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial = %d", fact);
}
void main()
{
    factorial();
}