#include <stdio.h>

void votingEligibility(int age)
{
    if(age >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");
}

int main()
{
    int age;

    printf("Enter Age : ");
    scanf("%d", &age);

    votingEligibility(age);

    return 0;
}