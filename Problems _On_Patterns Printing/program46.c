//input : 4
// output : *   *   *   *

#include<stdio.h>

void Display()
{
    int i = 0;

    for(i = 1;i <= 4 ; i++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{

    Display();

    return 0;
}