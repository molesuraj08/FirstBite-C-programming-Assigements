#include <stdio.h>

int vowelConsonant()
{
    char ch;

    printf("Enter an Alphabet : ");
    scanf(" %c", &ch);

    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
       ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return 1;
    else
        return 0;
}

int main()
{
    if(vowelConsonant())
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}