#include <stdio.h>

float calculator(int a, int b, int choice)
{
    switch(choice)
    {
        case 1: return a + b;
        case 2: return a - b;
        case 3: return a * b;
        case 4:
            if(b != 0)
                return (float)a / b;
            else
                return 0;
        default:
            return 0;
    }
}

int main()
{
    int a, b, choice;

    printf("Enter First Number : ");
    scanf("%d", &a);

    printf("Enter Second Number : ");
    scanf("%d", &b);

    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter Choice : ");
    scanf("%d", &choice);

    if(choice == 4 && b == 0)
        printf("Division by Zero is Not Possible");
    else
        printf("Result = %.2f", calculator(a, b, choice));

    return 0;
}