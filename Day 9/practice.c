#include<stdio.h>

int main()
{
    int i,j,terms = 10000000;

    for( i = 1; i <= terms; i++)
    {
        for ( j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d \n",i,j,i*j);
        }
        printf("\n");
        
    }
    
}
