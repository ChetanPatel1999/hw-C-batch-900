// make a function which take string as paramter ans return string length
#include <stdio.h>
int length(char str[])
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) // 3
    {
        count++;
    }
    return count;
}
void main()
{
    char str1[20] = "ram";
    char str2[20] = "shyam";
    char str3[20] = "radheshyam";

    printf("string1 length = %d\n", length(str1));
    printf("string2 length = %d\n", length(str2));
    printf("string3 length = %d\n", length(str3));
}