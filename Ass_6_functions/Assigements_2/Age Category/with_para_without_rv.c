#include <stdio.h>

void ageCategory(int age)
{
    if(age < 13)
        printf("Child");
    else if(age >= 13 && age <= 19)
        printf("Teenager");
    else if(age >= 20 && age <= 59)
        printf("Adult");
    else
        printf("Senior Citizen");
}

int main()
{
    int age;

    printf("Enter Age : ");
    scanf("%d", &age);

    ageCategory(age);

    return 0;
}