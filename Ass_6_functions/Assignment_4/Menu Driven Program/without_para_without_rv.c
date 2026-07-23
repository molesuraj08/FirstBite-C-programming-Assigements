#include <stdio.h>

void menu()
{
    int choice, n, i, rem, rev, sum, temp, fact, flag, j;

    do
    {
        printf("\n===== MENU =====");
        printf("\n1. Prime Number");
        printf("\n2. Armstrong Number");
        printf("\n3. Perfect Number");
        printf("\n4. Strong Number");
        printf("\n5. Exit");

        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number : ");
                scanf("%d", &n);

                flag = 1;
                if(n <= 1)
                    flag = 0;
                else
                {
                    for(i = 2; i <= n / 2; i++)
                    {
                        if(n % i == 0)
                        {
                            flag = 0;
                            break;
                        }
                    }
                }

                if(flag)
                    printf("Prime Number");
                else
                    printf("Not a Prime Number");
                break;

            case 2:
                printf("Enter Number : ");
                scanf("%d", &n);

                temp = n;
                sum = 0;

                while(n != 0)
                {
                    rem = n % 10;
                    sum += rem * rem * rem;
                    n /= 10;
                }

                if(sum == temp)
                    printf("Armstrong Number");
                else
                    printf("Not an Armstrong Number");
                break;

            case 3:
                printf("Enter Number : ");
                scanf("%d", &n);

                sum = 0;

                for(i = 1; i < n; i++)
                {
                    if(n % i == 0)
                        sum += i;
                }

                if(sum == n)
                    printf("Perfect Number");
                else
                    printf("Not a Perfect Number");
                break;

            case 4:
                printf("Enter Number : ");
                scanf("%d", &n);

                temp = n;
                sum = 0;

                while(n != 0)
                {
                    rem = n % 10;
                    fact = 1;

                    for(j = 1; j <= rem; j++)
                        fact *= j;

                    sum += fact;
                    n /= 10;
                }

                if(sum == temp)
                    printf("Strong Number");
                else
                    printf("Not a Strong Number");
                break;

            case 5:
                printf("Thank You...");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(choice != 5);
}

int main()
{
    menu();

    return 0;
}