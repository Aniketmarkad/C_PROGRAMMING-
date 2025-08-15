// take input from user display reverse number 

#include<stdio.h>

int DisplayRev(int iNo)
{
    int iRev = 0;
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }

    return iRev;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the number you want to reverse :\n");
    scanf("%d",&iValue1);

    iRet = DisplayRev(iValue1);
    printf("upadated number is : %d",iRet);

    return 0;
}