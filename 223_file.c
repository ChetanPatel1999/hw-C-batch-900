// append mode ("a") :- its not delete previus data of file
// its just insert new data
#include <stdio.h>
void main()
{
    FILE *fileLocation; // file type pointer
    fileLocation = fopen("C:\\Users\\PC\\Desktop\\rimzim\\abc.txt", "a");
    fprintf(fileLocation, "this new data\n");
    fprintf(fileLocation, "hi i am chetan\n");
    fclose(fileLocation);
}