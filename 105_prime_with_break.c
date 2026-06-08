#include <stdio.h>
void main()
{
    int num, c = 0, i;
    printf("enter a num : ");
    scanf("%d", &num); // 33
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++; // 3
        }
        if (c > 2)
        {
            break;
        }
    }
    if (c == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}