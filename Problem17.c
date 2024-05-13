// Accept Number from the user and Display its Factors in Reverse Order

#include<stdio.h>

void FactRet(int iNo)
{
    if(iNo < 1)
    {
        printf("Please enter a positive number.\n");
        return;
    }

    printf("Factors of %d in decreasing order:",iNo);

    for(int i = iNo; i >= 1; i--)

    if(iNo % i == 0)
    {
        printf("%d",i);
        
    }




} 

int main()
{
   int iValue = 0;
   
   printf("Enter Number :\n");
   scanf("%d",&iValue);

   FactRet(iValue);

    return 0;
}