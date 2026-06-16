#include <stdio.h>
void fun()
{
    static int i = 1;                  // its run only once time in porgram
    printf("hello world institute\n"); // 5
    i++;                               // 6
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}