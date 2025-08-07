//Take input from user and find its factors  return the addition of factors

#include<stdio.h>

int FactorAddition(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
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
    
    return iSum;    

}
int main()
{ 
    int iValue = 0;
    int iRet = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    iRet = FactorAddition(iValue);

    printf("Addition of factor is :%d\n",iRet);
    return 0;
}
