// Take perecentage as input from user and display the  which class  optained 

#include<stdio.h>

void DisplayClass(float fPercent)
{
    if((fPercent < 0) || (fPercent > 100))
    {
        printf("invalid marks\n");
    }
    else if((fPercent >= 0 ) && (fPercent < 35))
    {
        printf("fail");
    }
    else if ((fPercent >= 35) && (fPercent < 50))
    {
        printf("pass class\n");
    }
    else if ((fPercent >= 50) && (fPercent < 60))
    {
        printf("second class");
    }
    else if ((fPercent >= 60) && (fPercent < 70))
    {
        printf("first class");
    }
    else if ((fPercent >= 70) && (fPercent <=100))
    {
        printf("first class with distiction");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Enter your Percentage:\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);
    return 0;
}