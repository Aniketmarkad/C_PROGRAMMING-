//Take input from user and find the Factorial using for loop

#include<stdio.h>

#define ERR_INVALID -1

int Factorial(unsigned  int iNo)
{
    int iCnt = 0;
    int iFct = 1;

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
    int iRet = 0;

    printf("enter number :\n");
    scanf("%lu",&iValue);

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid input is enter");
    }
    else
    {
        printf("factorial is :%d\n",iRet);

    }

    return 0;
}