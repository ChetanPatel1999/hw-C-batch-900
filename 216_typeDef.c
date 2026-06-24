// typedef :-  its used to change data type name temparary .
#include <stdio.h>
struct student_of_10_class_section_a
{
    int rno;
    float per;
};

typedef int i;
typedef char c;
typedef struct student_of_10_class_section_a s10a;
void main()
{
    s10a s1;
    i a;
    a = 12;
    c alpha = 'T';
    printf("a = %d\n", a);
    printf("alpha = %c\n", alpha);

    s10a s2;

    s2.per = 45.67;
    s2.rno = 101;
    printf("student info : \n");
    printf("student ron : %d\n", s2.rno);
    printf("student per : %.2f\n", s2.per);
}