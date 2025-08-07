//Take input from user and find the Factorial using while loop updated version with handling some important point 

#include<stdio.h>
#define ERR_INVALID -1

unsigned long int Factorial(unsigned int iNo)
{
    int iCnt = 0;
   unsigned long int iFact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    iCnt = 1;
    while(iCnt <= iNo)
    {   
        iFact = iFact * iCnt;
        iCnt++;
    }
    return iFact;
}
int main()
{
    unsigned int iValue = 0;
    unsigned long int iRet = 0;

    printf("enter number:\n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);
    
    if(iRet == ERR_INVALID)
    {
        printf("invalid input\n");
    }
    else
    {
        printf("factorial is :%lu\n",iRet);
    }
   
    return 0;
}