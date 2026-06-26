// how to read sigle character from file
//  fgetc();
#include <stdio.h>
void main()
{
    FILE *fileLocation;
    fileLocation = fopen("C:\\Users\\PC\\Desktop\\rimzim\\square.txt", "r");
    char ch;

    ch = fgetc(fileLocation);
    printf("%c", ch);

    ch = fgetc(fileLocation);
    printf("%c", ch);

    ch = fgetc(fileLocation);
    printf("%c", ch);

    fclose(fileLocation);
}