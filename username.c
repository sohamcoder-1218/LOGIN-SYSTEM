#include<stdio.h>
#include<string.h>
int main(){
char username[30]="soham_1234";
char password[30]="soham_1808";
char checkuser[30];
char checkpass[30];
printf("ENTER YOUR USERNAME= ");
scanf("%s",checkuser);
printf("ENTER YOUR PASSWORD= ");
scanf("%s",checkpass);
if(strcmp(username,checkuser)==0 && strcmp(password,checkpass)==0)
{
    printf("LOGIN SUCCESSFUL");
}
else
{
    printf("LOGIN FAILED");
    printf(" PLEASE TRY AGAIN");
}

    return 0;
}
