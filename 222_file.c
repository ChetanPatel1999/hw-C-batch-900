// how to write data inside file
#include <stdio.h>
void main()
{
    FILE *fileLocation; // file type pointer
    fileLocation = fopen("C:\\Users\\PC\\Desktop\\rimzim\\abc.txt", "w");
    fprintf(fileLocation, "this new data\n");
    fprintf(fileLocation, "hi i am chetan\n");
    fclose(fileLocation);
}