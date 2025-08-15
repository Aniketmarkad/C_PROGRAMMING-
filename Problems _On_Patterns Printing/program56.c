//input : 4   *
// output : *   *   *   *

#include<stdio.h>

void Display(int iNo,char ch)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1;i <= iNo; i++)
    {
        printf("ch\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    char ch = '\0';

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    printf("Enter the charterstic :\n");
    scanf("%d",&ch);

    Display(iValue,ch);

    return 0;
}