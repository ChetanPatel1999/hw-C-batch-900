//  fgetc();
#include <stdio.h>
void main()
{
    FILE *fileLocation;
    fileLocation = fopen("C:\\Users\\PC\\Desktop\\rimzim\\square.txt", "r");
    char ch;
    printf("current position of fileLocation = %d\n", ftell(fileLocation));

    fseek(fileLocation, 10, SEEK_SET); // its set fileLocation inside file  other character
    printf("current position of fileLocation = %d\n", ftell(fileLocation));

    while (1)
    {
        ch = fgetc(fileLocation);
        if (ch == -1)
        {
            break;
        }
        printf("%c", ch);
    }

    printf("\ncurrent position of fileLocation = %d\n", ftell(fileLocation));

    rewind(fileLocation); // its set file location at begining of the file.

    printf("current position of fileLocation = %d\n", ftell(fileLocation));
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