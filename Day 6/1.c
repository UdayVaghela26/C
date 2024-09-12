#include<stdio.h>

int main()

{
    int first,second,third,minimum;

    printf("Enter a value of the first number:");
    scanf("%d",&first);
    printf("Enter a value of the second number:");
    scanf("%d",&second);
    printf("Enter a value of the third number:");
    scanf("%d",&third);

    minimum = (first < second) ? (first < third ? first : third) : (second < third ? second : third);

    printf("The Minimum value is %d\n",minimum);
}