#include<stdio.h>

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int space = 1; space <= 5-row; space--)
        {
            printf("  "); 
        }
        for (int col = 1; col <= row; col++)
        {
            printf("%d ",col);
        }
        for (int col = row-1; col >= 1; col--)
        {
            printf("%d ",col);
        }
        
        
        printf("\n");
        
    }
    
}

// #include <stdio.h>

// int main() {
    
    
//     for (int row = 1; row <= 5; row++) {
        
        
//         for (int space = 1; space <= 5-row; space++)
//         {
//             printf("  "); 
//         }
        
        
//         for (int col = 1; col <= row; col++) 
//         {
//             printf("%d ", col);
//         }
        
        
//         for (int col = row - 1; col >= 1; col--) 
//         {
//             printf("%d ", col);
//         }
        
        
//         printf("\n");
//     }

    
// }
