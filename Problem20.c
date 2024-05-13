// Accept Number from the User and Display Sum of its Factors and Non Factors

#include<stdio.h>

int sumOfFactors(int num)
{
    int factor_sum = 0;

       for(int i = 1; i <= num; i++)
       {
       if(num % i == 0)
          {
            factor_sum += i;
          }

       }
    
    return factor_sum;
}
    int sumOfNonFactors(int num)
    {
    
       int non_factor_sum = 0;
       {
         for(int i = 1; i <= num; i++)
          {
            if(num % i != 0)
            {
            non_factor_sum += i;
            }

          }
       }
    
    return non_factor_sum;
    }    


int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int factor_sum = sumOfFactors(num);
    int non_factor_sum = sumOfNonFactors(num);
    int difference = factor_sum - non_factor_sum;
    printf("The difference between the summation of factors and non-factors is: %d\n", difference);

    return 0;

}