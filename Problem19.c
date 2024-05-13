// Accept Number from the User and Display Sum of its Non Factors

#include<stdio.h>

int SumNonFact(int iNo)
{
    int sum = 0;

   if(iNo < 1)
    {
        printf("Please enter a positive number.\n");
    }
    else
    {

       for(int i = 1; i <= iNo; i++)
       {
       if(iNo % i != 0)
          {
             sum += i;
          }

       }
    }
    return sum;
}    


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}