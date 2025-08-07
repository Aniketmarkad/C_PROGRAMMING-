// Take input from user and print revese number from that input

#include <stdio.h>

void Display( int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo;iCnt >= 1;iCnt--)
    {
        printf("%d\n",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("enter number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
