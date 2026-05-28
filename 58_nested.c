// Write a program to accept roll no and marks of 5 subjects of a student, if
// individuals  subject have above 40 marks so print student qualify exam
// otherwise print student fail in exam and if student qualify exam so
// Calculate  percentage got in exam  by  student.
// a. If per greater than or equal to 75  A grade
// b. If per between 60-75  B grade
// c. If per between 50-60  C grade
// d. If per between 40-50  D grade
#include <stdio.h>
void main()
{
    int rno, s1, s2, s3, s4, s5;
    printf("enter rno : ");
    scanf("%d", &rno);
    printf("enter s1 : ");
    scanf("%d", &s1);
    printf("enter s2 : ");
    scanf("%d", &s2);
    printf("enter s3 : ");
    scanf("%d", &s3);
    printf("enter s4 : ");
    scanf("%d", &s4);
    printf("enter s5 : ");
    scanf("%d", &s5);
    if (s1 >= 40 && s2 >= 40 && s3 >= 40 && s4 >= 40 && s5 >= 40)
    {
        printf("rno : %d\n", rno);
        printf("student qualify exam\n");
        float per = ((s1 + s2 + s3 + s4 + s5) / 500.0) * 100;
        printf("percentage : %.2f\n", per); // 60
        if (per >= 75)
        {
            printf("Gread : A");
        }
        else if (per >= 60)
        {
            printf("Gread : B");
        }
        else if (per >= 50)
        {
            printf("Gread : C");
        }
        else
        {
            printf("Gread : D");
        }
    }
    else
    {
        printf("student fail in exam");
    }
}