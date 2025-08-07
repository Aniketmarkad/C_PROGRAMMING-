// Take input from user and  calculate sum of all number from that number to 1

#include<stdio.h>

int DisplaySum(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = iNo;iCnt >= 1;iCnt--)
    {
        iSum = iSum + iCnt ;
    }
    return iSum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number: \n");
    scanf("%d",&iValue);

    iRet = DisplaySum(iValue);

    printf("sum is :%d",iRet);

    return 0;
}