// enum :- enum is also user defined data type.
// its used to make constant intger value in bulk .
#include <stdio.h>
enum data
{
    a = 12,
    passing_marks = 33,
    total_marks = 100
};

void main()
{
    const float pi = 3.141;
    int c;
    c = a + 90;

    printf("a = %d\n", a);
    printf("c = %d\n", c);

    int per = 12;

    if (per >= passing_marks)
    {
        printf("student is pass");
    }
    else
    {

        printf("student is fails");
    }
}