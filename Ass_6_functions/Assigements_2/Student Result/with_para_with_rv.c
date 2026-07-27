#include <stdio.h>

int studentResult(int marks)
{
    if(marks >= 75)
        return 1;
    else if(marks >= 60)
        return 2;
    else if(marks >= 50)
        return 3;
    else if(marks >= 35)
        return 4;
    else
        return 5;
}

int main()
{
    int marks, result;

    printf("Enter Marks : ");
    scanf("%d", &marks);

    result = studentResult(marks);

    switch(result)
    {
        case 1:
            printf("Distinction");
            break;
        case 2:
            printf("First Class");
            break;
        case 3:
            printf("Second Class");
            break;
        case 4:
            printf("Pass Class");
            break;
        case 5:
            printf("Fail");
            break;
    }

    return 0;
}