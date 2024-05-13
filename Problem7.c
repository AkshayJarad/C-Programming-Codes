// Accept one Number from user and print that Number of * on Screen using while loop


#include<stdio.h>

void Display(int iNo)
{

    while(iNo > 0 )
    {
        printf("*\n");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
