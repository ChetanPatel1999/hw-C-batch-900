// wap to count char a hou many times appear in string.
#include <stdio.h>
void main()
{
    char name[] = "chetan patel";
    printf("name = %s\n", name);
    int i, c = 0;
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        if (name[i] == 'a')
        {
            c++;
        }
    }

    printf("total char 'a' count = %d", c);
}