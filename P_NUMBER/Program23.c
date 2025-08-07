//Take input from user and find factors and non factors of that number

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < (iNo); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d is factor \n",iCnt);
        }
        else 
        {
            printf("%d is Not factor \n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}