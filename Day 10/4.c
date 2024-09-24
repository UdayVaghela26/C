// 1 0 1 0 1
//   0 1 0 1
//     1 0 1
//       0 1
//         1

#include<stdio.h>

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int space = 1; space <= row-1; space++)
        {
            printf(" ");
        }
        
        for (int col = row ; col <= 5; col++)
        {
            if (col%2 != 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            
        }
        printf("\n");
        
    }
    
}