//  fgetc();
#include <stdio.h>
void main()
{
    FILE *fileLocation;
    fileLocation = fopen("C:\\Users\\PC\\Desktop\\rimzim\\abc.txt", "r");
    char ch;

    while (1)
    {
        ch = fgetc(fileLocation);
        if (ch == -1)
        {
            break;
        }
        printf("%c", ch);
    }

    fclose(fileLocation);
}