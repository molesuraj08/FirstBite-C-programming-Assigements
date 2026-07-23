#include<stdio.h>
int main()
{
    char email[50];
    printf("Enter your email address: \n");
    scanf("%s", email);
    if(strstr(email,"@gmail.com"))
    printf("Email Address");
    else 
    printf("Not a Gmail Address");
    return 0;
}