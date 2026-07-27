#include <stdio.h>

void vowelConsonant(char ch)
{
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
       ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("Vowel");
    else
        printf("Consonant");
}

int main()
{
    char ch;

    printf("Enter an Alphabet : ");
    scanf(" %c", &ch);

    vowelConsonant(ch);

    return 0;
}