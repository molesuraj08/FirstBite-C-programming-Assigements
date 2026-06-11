#include <stdio.h>

int main() {
    int choice, n;

    printf("Enter Number: ");
    scanf("%d", &n);

    printf("\n1. Even/Odd");
    printf("\n2. Prime");
    printf("\n3. Palindrome");
    printf("\n4. Positive/Negative/Zero");
    printf("\n5. Reverse Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            if(n%2==0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2: {
            int flag=1;

            if(n<=1)
                flag=0;

            for(int i=2; i<n; i++) {
                if(n%i==0) {
                    flag=0;
                    break;
                }
            }

            if(flag)
                printf("Prime");
            else
                printf("Not Prime");
            break;
        }

        case 3: {
            int temp=n, rev=0, rem;

            while(temp>0) {
                rem=temp%10;
                rev=rev*10+rem;
                temp/=10;
            }

            if(rev==n)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;
        }

        case 4:
            if(n>0)
                printf("Positive");
            else if(n<0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5: {
            int temp=n, rev=0, rem;

            while(temp>0) {
                rem=temp%10;
                rev=rev*10+rem;
                temp/=10;
            }

            printf("%d", rev);
            break;
        }

        case 6: {
            int temp=n, rem, sum=0;

            while(temp>0) {
                rem=temp%10;
                sum+=rem;
                temp/=10;
            }

            printf("%d", sum);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}