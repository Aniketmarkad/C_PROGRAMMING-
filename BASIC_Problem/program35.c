// Take input from user as int ,float, int, char ,double  

#include<stdio.h>

int main()
{
    int iValue = 0;
    float fValue = 0.0f;
    double dValue = 0.0;
    char cValue = '\0';


    printf("Enter the integer  value :\n");
    scanf("%d",&iValue);

    printf("Enter the float value : \n");
    scanf("%f",&fValue);

    printf("enter the double value :\n");
    scanf("%lf",&dValue);

    printf("Enter the charter value :\n");
    scanf(" %c",&cValue);

    printf(" integer value is : %d\n",iValue);
    printf(" float value is : %0.2f\n",fValue);
    printf(" double value is : %0.4f\n",dValue);
    printf(" char value is : %c\n",cValue);

    return 0;
}