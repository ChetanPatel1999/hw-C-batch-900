// how to write single char
//   fputc();
#include <stdio.h>
void main()
{
    FILE *fileLocation;
    char ch = 'P';
    fileLocation = fopen("C:\\Users\\PC\\Desktop\\rimzim\\square.txt", "a");
    fputc(ch, fileLocation);
    fclose(fileLocation);
}