//input : 4
// output : -4   -3   -2   -1   0

#include<stdio.h>

void Display()
{
    int i = 0;

    for(i = -4;i <= 0 ; i++)
    {
        printf("%d \t",i);
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}