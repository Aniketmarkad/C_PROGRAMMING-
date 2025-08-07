// Take input from user and print that time of Hello on console
#include<stdio.h>

void Display (int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Hello\n");
    }        
}
int main()
{
    int iValue = 0;

     printf("enter frequency :\n");
     scanf("%d",&iValue);

     Display(iValue);

     return 0;

}