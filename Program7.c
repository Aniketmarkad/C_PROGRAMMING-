//  Take input from user and display that number 5 time on console

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <=5;iCnt ++)
    {
         printf("%d\n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("enter input : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}