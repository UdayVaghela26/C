#include<stdio.h>

int main()
{
    
    int row,col;
    
    for (row = 5; row >= 1; row--)
    {
        for (col = row; col <= 5; col++)
        {
            printf("%d",col);
        }
        printf("\n");
        
    }
    
    
}