#include <stdio.h>

int ageCategory()
{
    int age;

    printf("Enter Age : ");
    scanf("%d", &age);

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
    int result = ageCategory();

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