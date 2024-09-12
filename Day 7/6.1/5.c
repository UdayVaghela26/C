#include<stdio.h>

int main()
{
    int start,end;

    printf("Enter the start year : ");
    scanf("%d",&start);
    printf("Enter the end year : ");
    scanf("%d",&end);

    while (start <= end)
    {
        if (start % 4 == 0)
        {
            printf("LEAP YEAR \n");
        }
        else
        {
            printf("%d ",start);
        }
        start++;
        
        
    }
    
}