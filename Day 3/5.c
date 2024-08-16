#include <stdio.h>

int main() 
{
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("The result is X : %d\n",x);
    printf("The result is y : %d",y);

}