// Accept Number from the User and Return the Multiplication of its Factors

#include<stdio.h>

int MultFact(int iNo)
{
    int Value = 1;

    for(int i = 1; i <= iNo; i++)
    {
    if(iNo % i == 0)
       {
        printf("%d",i);
        Value *= i;
       }
    }
    printf("\nProduct of Factors: %d\n",Value);
    return Value;
}    


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}