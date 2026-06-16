#include <stdio.h>
int sum(int num)
{
    static int i = 1, s = 0;
    s = s + i; // 55
    i++;       // 11
    if (i <= num)
    {
        sum(num);
    }
    return s;
}
void main()
{
    int res = sum(10);
    printf("sum = %d", res);
}