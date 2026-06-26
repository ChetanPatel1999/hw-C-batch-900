// how to read data from file
#include <stdio.h>
void main()
{
    FILE *fileLocation;
    char data[20];
    fileLocation = fopen("C:\\Users\\PC\\Desktop\\rimzim\\square.txt", "r");
    int i, stop;
    while (1)
    {
        stop = fscanf(fileLocation, "%s", data);
        if (stop == -1)
        {
            break;
        }
        printf("%s ", data);
    }

    fclose(fileLocation);
}