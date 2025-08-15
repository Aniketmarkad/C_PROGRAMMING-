// take input from user as number and find the frequency of specific digit 

#include<stdio.h>

int CountFrequency(int iNo,int iNo1)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iNo1)
        {
            iCount++;
        }
        iNo = iNo/10;
    }

    return iCount;
    
}

int main()
{
    int iValue = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printf("enter digit that you want to check frequency :\n");
    scanf("%d",&iValue2);

    iRet = CountFrequency(iValue,iValue2);

    printf(" Frequency of %d is : %d",iValue2,iRet);

    return 0;
}