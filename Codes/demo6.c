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
    printf("\n Search for a roll number : \n");
    int search;
    scanf("%d",&search);
    int found = 0;
    for(i=0; i<size; i++)
    {
        if(roll_no[i] == search)
        {
            found = 1;
            printf("Roll number %d found at index %d\n", search, i);
            break;
        }
    }
    if(found==0)
    {
        printf("Roll number %d not found in the array\n", search);
    }
}