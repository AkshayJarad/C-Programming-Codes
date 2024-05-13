// Accept Number from user and Check Weather it is Even or Odd

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
   int iCnt = 0;
   int Ans = 0;

   Ans = iNo % 2;

   if(Ans ==0)
   {
      printf("Number is Even\n");
   }
   else
   {
      printf("Number is odd\n");
   }

   
}
int main()
{
   int iValue = 0;
   BOOL bRet = FALSE;

   printf("Enter Number : \n");
   scanf("%d",&iValue);

   bRet = ChkEven(iValue);

    return 0;
}