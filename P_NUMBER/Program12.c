
// Take input from user and check wheather number is even or not using flage

#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{ 
    bool bResult = false;

    if((iNo % 2) == 0)
    {
        bResult= true;
    }
    else
    {
        bResult =false;
    }
    return bResult;
}

int main ()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("%d is even no",iValue);
    }
    else
    {
        printf("%d is odd no ",iValue);
    }

    return 0;
}