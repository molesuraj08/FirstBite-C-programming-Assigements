#include <stdio.h>

int checkCase()
{
    char ch;

    printf("Enter an Alphabet : ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 2;
    else
        return 0;
}

int main()
{
    int result;

    result = checkCase();

    if(result == 1)
        printf("Uppercase Letter");
    else if(result == 2)
        printf("Lowercase Letter");
    else
        printf("Invalid Input");

    return 0;
}