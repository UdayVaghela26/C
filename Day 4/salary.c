#include<stdio.h>

int main()

{
    float basic_salary, hra, da, ta, gross_salary;

    printf("Enter the Salary : ");
    scanf("%f",&basic_salary);

    hra = basic_salary * 0.10;
    printf("%f \n",hra);

    da = basic_salary * 0.05;
    printf("%f \n",da);

    ta = basic_salary * 0.08;
    printf("%f \n",ta);

    gross_salary = hra + da + ta + basic_salary;

    printf("gross_salary is : %f",gross_salary);
}