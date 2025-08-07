//Take input from user and Display its factor 

#include<stdio.h>
#define ERR_INVALID -1

int  DisplayFactors(int iNo) 
{
    int iCnt = 0;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
    return 0;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DisplayFactors(iValue);
        
    if(iRet == ERR_INVALID)
   {
        printf("invalid input");
   }
    
    return 0;
}