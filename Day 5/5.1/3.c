#include <stdio.h>

int main() {
    int maths, english, science;
    float average;

    printf("Enter maths marks: ");
    scanf("%d", &maths);

    printf("Enter english marks: ");
    scanf("%d", &english);

    printf("Enter science marks: ");
    scanf("%d", &science);

    if(maths < 0 && maths > 100 || english < 0 && english > 100 || science < 0 && science > 100) 
    {
        printf("invalid mark \n");
    } 
    else 
    {
        average = (maths + english + science) / 3;
        printf("Average mark: %f\n",average);
    }
}