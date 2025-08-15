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
    int no1 = 11;
    int no2 = 10;
    int Ans = 0;

    Ans = Addition(no1,no2);

    printf("addition is : %d",Ans);


    return 0;
}