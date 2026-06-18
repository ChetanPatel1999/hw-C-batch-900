#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void reverse(int arr[], int n)
{
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
int sumArrayElement(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
void main()
{
    int marks[5] = {30, 40, 50, 10, 70};
    int height[3] = {3, 6, 7};
    int watchPrice[8] = {400, 500, 300, 200, 600, 100, 80, 90};

    int i;
    printf("\ndisplay marks : \n");
    display(marks, 5);

    printf("\ndisplay height : \n");
    display(height, 3);

    printf("\ndisplay watchPrice : \n");
    display(watchPrice, 8);

    printf("\ndisplay watchPrice in revrse order: \n");
    reverse(watchPrice, 8);

    printf("\nheight array sum :%d ", sumArrayElement(height, 3));
    printf("\nmarks array sum :%d ", sumArrayElement(marks, 5));
}