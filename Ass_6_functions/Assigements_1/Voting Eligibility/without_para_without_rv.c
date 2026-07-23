#include <stdio.h>

void votingEligibility()
{
    int age;

    printf("Enter Age : ");
    scanf("%d", &age);

    if(age >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");
}

int main()
{
    votingEligibility();
    return 0;
}