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
void subtraction()
{
    int a, b, c;
    printf("this is subtraction fun : \n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a - b;
    printf("subtraction = %d\n", c);
}
void multiplication()
{
    int a, b, c;
    printf("this is multiplication fun : \n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a * b;
    printf("multiplication = %d\n", c);
}
void division()
{
    int a, b, c;
    printf("this is division fun : \n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a / b;
    printf("division = %d\n", c);
}
void displayFormate()
{
    printf("<-----  welcome to my calculator  ----->\n");
    printf("        press 1 for addition : \n");
    printf("        press 2 for subtraction : \n");
    printf("        press 3 for multiplication : \n");
    printf("        press 4 for division : \n");
}
void main()
{
    int num;
    displayFormate();
    printf("        press any number  : ");
    scanf("%d", &num); // 2
    switch (num)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    default:
        printf("please enter 1 to 4 ");
    }
}