// Accept Number from user and Display Even Numbers till that Number

#include<stdio.h>

void PrintEven(int iNo)
{ 
    int i = 0;
    
   if(iNo <= 0)
   {
      printf("Please enter a positve number : \n");
   }
   else
   {
       printf("The first %d even numbers are : \n", iNo);

       for (int i = 1; i <= iNo; i++)
       {
           if((iNo % 2 * i) == 0)
           {
            printf("%d\n",i);
           }
       }
       
   }

}   

    int main()
    {
        int iValue = 0;
        printf("Enter  number : \n");
        scanf("%d",&iValue);
        PrintEven(iValue);

        return 0;
    }



