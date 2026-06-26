// how to read data from file
#include <stdio.h>
void main()
{
    FILE *fileLocation;
    char data[20];
    fileLocation = fopen("C:\\Users\\PC\\Desktop\\rimzim\\square.txt", "r");
    fscanf(fileLocation, "%s", data);
    printf("%s ", data);

    fscanf(fileLocation, "%s", data);
    printf("%s ", data);

    fscanf(fileLocation, "%s", data);
    printf("%s ", data);

    fscanf(fileLocation, "%s", data);
    printf("%s ", data);

    fclose(fileLocation);
}