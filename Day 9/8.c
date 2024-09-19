#include<stdio.h>

int main()
{
    int tem = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            tem++;
            printf("%d ",tem);
        }
        printf("\n");
        
    }
    
}