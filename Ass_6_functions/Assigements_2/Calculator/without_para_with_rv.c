#include <stdio.h>

float calculator()
{
    int a, b, choice;

    printf("Enter First Number : ");
    scanf("%d", &a);

    printf("Enter Second Number : ");
    scanf("%d", &b);

    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter Choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: return a + b;
        case 2: return a - b;
        case 3: return a * b;
        case 4:
            if(b != 0)
                return (float)a / b;
            else
            {
                printf("Division by Zero is Not Possible\n");
                return 0;
            }
        default:
            printf("Invalid Choice\n");
            return 0;
    }
}

int main()
{
    printf("Result = %.2f", calculator());
    return 0;
}