#include <stdio.h>

void checkCase()
{
    char ch;

    printf("Enter an Alphabet : ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase Letter");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase Letter");
    else
        printf("Invalid Input");
}

int main()
{
    checkCase();
    return 0;
}