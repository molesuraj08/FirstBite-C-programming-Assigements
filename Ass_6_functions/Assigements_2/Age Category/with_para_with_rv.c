#include <stdio.h>

int ageCategory(int age)
{
    if(age < 13)
        return 1;
    else if(age >= 13 && age <= 19)
        return 2;
    else if(age >= 20 && age <= 59)
        return 3;
    else
        return 4;
}

int main()
{
    int age, result;

    printf("Enter Age : ");
    scanf("%d", &age);

    result = ageCategory(age);

    switch(result)
    {
        case 1:
            printf("Child");
            break;
        case 2:
            printf("Teenager");
            break;
        case 3:
            printf("Adult");
            break;
        case 4:
            printf("Senior Citizen");
            break;
    }

    return 0;
}