// wap to count vovels appear in string.
#include <stdio.h>
void main()
{
    char name[] = "chetan patel";
    printf("name = %s\n", name);
    int i, c = 0;
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            c++;
        }
    }

    printf("total vovel count = %d", c);
}