//Take input from user and check wheather number is prime or not without  using flage

#include<stdio.h>
#include<stdbool.h>

bool ChkPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2;iCnt <= (iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }
    if(iCnt > (iNo/2))
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

    printf("Enter number:");
    scanf("%d ",&iValue);

    bRet = ChkPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number",iValue);
    }
    else 
    {
        printf("%d is not prime number",iValue);
    }
    return 0;
}