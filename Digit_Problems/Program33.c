// Take input number from user and count  the even  digit 

#include<stdio.h>

int CountEvenDigits(int iNo)
{   
    int iCnt = 0;
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
    while(iNo != 0)
    {  
        
        iDigit = iNo % 10;

        if((iNo % 2) == 0)
        {   
            iCnt++;
        }
        iNo = iNo / 10;
    }
     return iCnt;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number:");
    scanf("%d ",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("number of even digit is%d",iRet);

    return 0;
}