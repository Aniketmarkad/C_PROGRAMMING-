//Take input from user and find factorial of that number

#include<stdio.h>

#define ERR_INVALID -1

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFct = 1;//not with zero

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
    int iValue = 0;
    int iRet = 0;

    printf("enter number :\n");
    scanf("%u",&iValue);

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