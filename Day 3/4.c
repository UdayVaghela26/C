#include <stdio.h>

int main() 
{
    int x, y, z;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    z = x;
    x = y;
    y = z;

    printf("The result is X : %d\n",x);
    printf("The result is y : %d",y);

}