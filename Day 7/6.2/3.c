#include<stdio.h>

int main()
{
    int i = 1,N;

    printf("Enter the value of N : ");
    scanf("%d",&N);

    do
    {
        if (i <= N)
        {
            printf("%d ", i);
        }
        i = i+3;
    } while (i <= N);
    
}