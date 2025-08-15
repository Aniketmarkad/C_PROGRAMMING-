//input : 4
// output : 1   2   3   4

#include<stdio.h>

void Display()
{
    int i = 0;

    for(i = 1;i <= 4 ; i++)
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