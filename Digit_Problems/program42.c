// Take input number from user and display the odd  digit 

#include<stdio.h>

void DisplayOddDigits(int iNo)
{   
    
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
    while(iNo != 0)
    {  
        
        iDigit = iNo % 10;

        if((iNo % 2) != 0)
        {   
            printf("%d",iDigit);
        }
        iNo = iNo / 10;
    }
    
}


int main()
{
    int iValue = 0;

    printf("enter number:");
    scanf("%d ",&iValue);

    DisplayOddDigits(iValue);

    return 0;
}