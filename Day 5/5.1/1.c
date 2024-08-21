#include <stdio.h>

int main()
{
    int x,y;

    printf("Enter the value x : ");
    scanf("%d",&x);

    printf("Enter the value y : ");
    scanf("%d",&y);

    if (x < y)
    {
        printf("x is min");
    }
    else
    {
        printf("y is max");
    }
}