#include<stdio.h>
int main()
{
    int size;
    int i;
    printf("Enter size of array : \n");
    scanf("%d",&size);
    int roll_no[size];
    printf("Enter %d roll numbers : \n", size);
    for(i=0; i<size; i++)
    {
        printf("Roll number [%d] = ", i);
        scanf("%d",&roll_no[i]);
    }
    printf("\nRoll numbers are :\n");
    for(i=0; i<size; i++)
    {
        printf("Roll number [%d] = %d\n", i, roll_no[i]);
    }
}