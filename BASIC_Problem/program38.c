// simple addition program with hardcoded value using function

#include<stdio.h>


int Addition(int no1,int no2)
{
    int Ans = 0;
    Ans = no1 + no2 ;

    return Ans;
}

int main()
{
    int no1 = 0;
    int no2 = 0;
    int Ans = 0;

    printf("Enter the first no :\n");
    scanf("%d",&no1);

    printf("Enter the second no :\n");
    scanf("%d",&no2);

    Ans = Addition(no1,no2);

    printf("addition is : %d",Ans);


    return 0;
}