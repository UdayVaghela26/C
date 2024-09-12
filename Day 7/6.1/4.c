#include<stdio.h>

int main()
{
    int N;

    printf("Enter the value of N :");
    scanf("%d",&N);

    if (N % 2 == 1)
    {
        N--;
    }
    

    while (N >= 1)
    {
        printf("%d ",N);
        N-=2;
    }
    
}