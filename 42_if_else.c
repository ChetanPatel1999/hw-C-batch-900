//  Write a program to accept username and password and verify login (hardcoded
// values).
#include <stdio.h>
void main()
{
    int set_password;
    char set_username;
    printf("welcome to my website ....\n");
    printf("first register then log-in : \n");
    printf("set your user name : ");
    scanf("%c", &set_username);
    printf("set your password : ");
    scanf("%d", &set_password);
    printf("registration succefully .\n");
    printf("----------------------------\n");
    int pass;
    char user;
    printf("welcome to log-in page : \n");
    printf("enter your user name : ");
    scanf(" %c", &user);
    printf("enter password : ");
    scanf("%d", &pass);
    if (user == set_username && pass == set_password)
    {
        printf("log in successfuly");
    }
    else
    {
        printf("wrong username or password");
    }
}