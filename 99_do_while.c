//  Create a program that simulates a salary distribution system.
// 1.Take the total available salary amount at the start.
// 2.Using a do...while loop, repeatedly take input for the amount to
// distribute  to employees.
// 3.Keep subtracting the distributed amounts from the total.
// 4.Stop the process when the entire amount has been distributed or no
// more money is left.
// 5.At the end, display:
// a. The total amount distributed.
// b. The remaining balance
#include <stdio.h>
void main()
{
    int salary, totalAmount = 20000, distributedAmount = 0, p;
    printf("   <--- welcome to salary distribute App --->\n");
    printf("------------------------------------------------\n");
    printf("             Total Amount :%d \n", totalAmount);
    do
    {
        printf("enter salary : ");
        scanf("%d", &salary);                           // 5000
        distributedAmount = distributedAmount + salary; // 23000
        if (distributedAmount > totalAmount)
        {
            printf("insufficiant amount \n");
            distributedAmount = distributedAmount - salary;
        }
        printf("press 1 if you have more employee : ");
        scanf("%d", &p);

    } while (p == 1);

    printf("------------------------------------------------\n");
    printf("Total distribute : %d\n", distributedAmount);
    printf("Reamaing amount : %d\n", totalAmount - distributedAmount);
}