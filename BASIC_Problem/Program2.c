//Take input from user and calculate the percentage

#include<stdio.h>

 float CalculatePercentage(int iTotal, int iObtained)
{
    float iAns=0.0f;
    iAns=((float) iObtained / (float)iTotal) * 100;
    return iAns;
}
int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float fPercente = 0.0f;

    printf("Enter your total marks :\n");
    scanf("%d",&iTotal);

    printf("enter your obtained marks\n");
    scanf("%d",&iObtained);

    fPercente= CalculatePercentage(iTotal,iObtained);

    printf("percentage is :%.2f%%",fPercente);

    return 0;

}