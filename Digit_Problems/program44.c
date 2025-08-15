// take input from user display summation of odddigit

#include<stdio.h>

int SummationEven(int iNo)
{   
    
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
    while(iNo != 0)
    {  
        
        iDigit = iNo % 10;

        if((iNo % 2) != 0)
        {   
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSum;
    
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number:");
    scanf("%d ",&iValue);

    iRet = SummationEven(iValue);

    printf(" Summation of odd digit : %d",iRet);

    return 0;
}