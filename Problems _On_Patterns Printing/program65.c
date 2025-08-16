/*
    A   B   C   D
    A   B   C   D
    A   B   C   D
    A   B   C   D
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i =1; i <= iRow ; i++)
    {
        for(j = 1,ch= 'A'; j <= iCol; j++,ch++) 
        {
            printf(" %c",ch);
        
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf(" Enter the no of row :\n");
    scanf("%d",&iValue1);

    printf(" Enter the no of row :\n");
    scanf("%d",&iValue2);
    
    Display(iValue1,iValue2);

    return 0 ;
}