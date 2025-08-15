// Take input from user and display the digit 

#include<stdio.h>

int DisplayDigits(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }
    return 0;
}


int main()
{
    int iValue = 0;

    printf("enter number:");
    scanf("%d ",&iValue);

    DisplayDigits(iValue);
    return 0;
}