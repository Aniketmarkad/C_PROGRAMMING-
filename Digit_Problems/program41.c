// Take input number from user and display the even  digit 

#include<stdio.h>

void DisplayEvenDigits(int iNo)
{   
    
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
    while(iNo != 0)
    {  
        
        iDigit = iNo % 10;

        if((iNo % 2) == 0)
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

    DisplayEvenDigits(iValue);

    return 0;
}