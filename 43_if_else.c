#include <stdio.h>
void main()
{
    int cost_price = 500, selling_price = 700;
    if (cost_price > selling_price)
    {
        int loss;
        loss = cost_price - selling_price;
        printf("loss = %d rs", loss);
    }
    else
    {
        int profit;
        profit = selling_price - cost_price;
        printf("profit = %d rs", profit);
    }
}