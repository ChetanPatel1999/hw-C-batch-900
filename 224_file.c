#include <stdio.h>
void main()
{
    int num, square;
    FILE *fileLocation;
    fileLocation = fopen("C:\\Users\\PC\\Desktop\\rimzim\\sqaure.txt", "a");
    printf("enter a num : ");
    scanf("%d", &num);
    square = num * num;
    printf("square of %d = %d\n", num, square);
    fprintf(fileLocation, "square of %d = %d\n", num, square);
    fclose(fileLocation);
}