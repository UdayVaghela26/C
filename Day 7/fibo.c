#include<stdio.h>

int main()
{
    int t1 = 0 ,t2 = 1,nexttrm,N,i;
    nexttrm = t1 + t2;
    printf("Enter the number of term : ");
    scanf("%d",&N);

    printf("%d ",t1);
    printf("%d ",t2);

    for (i = 0; i < N; i++)
    {
        printf("%d ",nexttrm);
        t1 = t2;
        t2 = nexttrm;
        nexttrm = t1 + t2;
    }   
}