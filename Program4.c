//Take input age from  user and based on that display the tickit price 

#include<stdio.h>
#define ERR_INVALID_AGE -1

int CalculateTickit(int iAge)
{
   int  iPrice = 0;

   if(iAge < 0)
   {
        return ERR_INVALID_AGE;

   }

   if((iAge >= 0) && (iAge < 5))
   {
        iPrice = 0;
   }

   else if((iAge >= 5) && (iAge < 18))
   {
        iPrice = 700;
   }

   else if((iAge >= 18) && (iAge < 50))
   {
        iPrice = 999;
   }

   else if(iAge >= 50)
   {
        iPrice = 500;
   }
   return iPrice;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter your age : \n");
    scanf("%d",&iValue);

    iRet = CalculateTickit(iValue);

    if(iRet == ERR_INVALID_AGE)
    {
        printf("unable to calculate tickit as age is invalid ");
    }
    else
    {
        printf("your tikit price is : %d",iRet);
    } 
    return 0;
}