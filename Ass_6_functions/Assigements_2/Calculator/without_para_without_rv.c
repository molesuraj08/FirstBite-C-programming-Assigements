#include <stdio.h>

void calculator()
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
        case 1:
            printf("Addition = %d", a + b);
            break;

        case 2:
            printf("Subtraction = %d", a - b);
            break;

        case 3:
            printf("Multiplication = %d", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Division = %.2f", (float)a / b);
            else
                printf("Division by Zero is Not Possible");
            break;

        default:
            printf("Invalid Choice");
    }
}

int main()
{
    calculator();
    return 0;
}