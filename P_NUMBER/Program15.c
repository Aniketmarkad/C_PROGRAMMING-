//Take input from user and and add all the number upto that number 
//input 5
// 1+2+3+4+5=
#include<stdio.h>

int DisplaySum(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 1;iCnt <= iNo;iCnt++ )
    {
        iSum = iSum + iCnt ;
    }

    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet =0;

    printf("enter number:\n");
    scanf("%d",&iValue);

    iRet = DisplaySum(iValue);
     
    printf("additon is :%d",iRet);

    return 0;
}