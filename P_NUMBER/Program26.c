//Take input from user and check wheather number is perfect or not

#include<stdio.h>
#include<stdbool.h>

bool ChkPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if( iNo < 0)
    {
       iNo = -iNo;
    } 

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt ;
        }

    }
    if(iSum ==  iNo)
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
    scanf("%d",&iValue);

    bRet = ChkPerfect(iValue);
 
    if (bRet == true)
    {
        printf("%d is perfect no\n",iValue);
    }
    else
    {
        printf("%d is not perfect no\n",iValue);
    } 
    return 0;
}