#include<stdio.h>
int main()
{
    char str1[]="suraj@gmail.comx";
    char str2[]="@gmail.com";
    int pos=(str1-str2);
    if(strcmp(str1+pos,str2))
        printf("Email Address");
    else
        printf("Not a Gmail Address");
        return 0;
}