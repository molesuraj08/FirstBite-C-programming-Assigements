#include <stdio.h>

void vowelConsonant()
{
    char ch;

    printf("Enter an Alphabet : ");
    scanf(" %c", &ch);

    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
       ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("Vowel");
    else
        printf("Consonant");
}

int main()
{
    vowelConsonant();
    return 0;
}