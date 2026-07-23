#include <stdio.h>

int votingEligibility(int age)
{
    if(age >= 18)
        return 1;
    else
        return 0;
}

int main()
{
    int age;

    printf("Enter Age : ");
    scanf("%d", &age);

    if(votingEligibility(age))
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");

    return 0;
}