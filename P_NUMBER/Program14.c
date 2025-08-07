// Take input from user and check weather number is divisible by 5 and 3 both use flage

#include <stdio.h>
#include<stdbool.h>

bool ChkDivision(int iNo)
{
    bool bResult = false;
    
    if(((iNo % 5) == 0) && ((iNo % 3) == 0))
    {
        bResult = true;
    }
    else
    {
        bResult = false;
    }
    return bResult;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter number :");
    scanf("%d",&iValue);

    bRet = ChkDivision(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 3 and 5",iValue);
    }
    else
    {
        printf("%d is not Divisible by 3 and 5",iValue);
    }

    return 0;

}
