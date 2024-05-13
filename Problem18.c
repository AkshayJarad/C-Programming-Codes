// Accept Number from user and Display its Non-Factors

#include<stdio.h>

void NonFact(int iNo)
{
   if(iNo < 1)
    {
        printf("Please enter a positive number.\n");
        return;
    }
    printf("Non-Factors of %d: ",iNo);

    for(int i = 1; i <= iNo; i++)
    {
    if(iNo % i != 0)
       {
        printf("%d",i);
       }

    }
}


int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}