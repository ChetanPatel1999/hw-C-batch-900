// Write a program using a do...while loop that keeps taking numbers from
// the user and adds them to a running sum until the user presses 1. Finally,
// display the total sum.
#include <stdio.h>
void main()
{
    int num, sum = 0, p;
    do
    {
        printf("enter a num : ");
        scanf("%d", &num); // 30
        sum = sum + num;   // 90
        printf("you want to add more numbers press 1 : ");
        scanf("%d", &p); // 5
    } while (p == 1);

    printf("total sum = %d", sum);
}