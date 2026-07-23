
int add(void);
int sub(void);
int mul(void);
int div(void);

int main()
{
    printf("Enter 1 For Addition\n");
    printf("Enter 2 For Subtraction\n");
    printf("Enter 3 For Multiplication\n");
    printf("Enter 4 For Division\n");

    int choice;
    scanf("%d", &choice);

    if(choice == 1)
    {
        int res = add();
        printf("The Sum is %d", res);
    }
    else if(choice == 2)
    {
        int res = sub();
        printf("The Sub is %d", res);
    }
    else if(choice == 3)
    {
        int res = mul();
        printf("The Mul is %d", res);
    }
    else if(choice == 4)
    {
        int res = div();
        printf("The Div is %d", res);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}

int add(void)
{
    int a, b;
    printf("Enter Two Numbers\n");
    scanf("%d%d", &a, &b);
    return a + b;
}

int sub(void)
{
    int a, b;
    printf("Enter Two Numbers\n");
    scanf("%d%d", &a, &b);
    return a - b;
}

int mul(void)
{
    int a, b;
    printf("Enter Two Numbers\n");
    scanf("%d%d", &a, &b);
    return a * b;
}

int div(void)
{
    int a, b;
    printf("Enter Two Numbers\n");
    scanf("%d%d", &a, &b);
    return a / b;
}