//input : 4
// output : -4   -3   -2   -1   0   1   2   3   4

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    for(i = -iNo;i <= 0 ; i++)
    {
        printf("%d \t",i);
    }

    for(i = 1; i<= iNo ;i++)
    {
        printf("%d\t",i);

    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}