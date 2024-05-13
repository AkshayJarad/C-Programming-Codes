// Accept a Number from the user and Check Weather it is Divisible by 5 or Not

#include<stdio.h>
#include<stdbool.h>

bool CheckDivide(int iNo)
{

  if((iNo % 5) == 0)
   {
     return true;
   }
  else
   {
     return false;
   }


}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckDivide(iValue);

    if(bRet == true)
    {
        printf("Number is Divisible by 5\n");
    }
    else
    {
        printf("Number is Not Divisible by 5\n");
    }



    return 0;
}