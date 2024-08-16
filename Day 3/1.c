#include <stdio.h>

int main() 
{
    int x, y,result;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    result = (x + y) * (x + y);

    printf("The result is: %d\n", result);

}