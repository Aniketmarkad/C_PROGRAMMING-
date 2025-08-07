//Take input from user and find the Factorial using for loop updated version with handling some important point 

#include<stdio.h>

#define ERR_INVALID -1

unsigned long int Factorial(unsigned  int iNo)
{
    int iCnt = 0;
    unsigned long  iFct = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iFct = iFct * iCnt;
    }
    return iFct;
}

int main()
{
    unsigned int iValue = 0;
    unsigned long int iRet = 0;

    printf("enter number :\n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid input is enter");
    }
    else
    {
        printf("factorial is :%lu\n",iRet);

    }

    return 0;
}