#include<stdio.h>

int main()
{
    int i,N,sum = 0;

    printf("enter any number : ");
    scanf("%d",&N);

    for ( i = 1; i <= N; i++)
    {
        sum = sum + i;
        
    }
    printf(" The summ of all numbers = %d \n", sum);
    
}