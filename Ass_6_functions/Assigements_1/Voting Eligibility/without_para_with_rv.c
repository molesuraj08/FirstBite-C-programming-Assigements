#include <stdio.h>

int votingEligibility()
{
    int age;

    printf("Enter Age : ");
    scanf("%d", &age);

    if(age >= 18)
        return 1;
    else
        return 0;
}

int main()
{
    if(votingEligibility())
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");

    return 0;
}