// Accept Number from user and Display its Even Factors

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
   int i = 1;

   if(iNo <= 0)
   {
      iNo = -iNo;
   }
   printf("Even factors of %d are : \n",iNo); 

   for(i = 1; i <= iNo; i++)
   {
       if(iNo % i == 0  && i % 2 == 0 )
       {
           printf("%d",i);
       }
   }
   printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d\n",&iValue);
    
    DisplayEvenFactor(iValue);


    return 0;
}
