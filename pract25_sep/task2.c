/*
SALARY CALCULATOR
Basic salary                        HRA                             DA
1-4000                              10%                             50%
4000-8000                           15%                             60%
8000-12000                          20%                             70%
12000-above                         25%                             80%
ga=bs+hra+da
*/
#include <stdio.h>
int main()
{
    float bs, hra, da, gs;
    printf("Enter Basic Salary : ");
    scanf("%f", &bs);
    if (bs >= 1 && bs <= 4000)
    {
        hra = bs * 10 / 100;
        da = bs * 50 / 100;
    }
    else if (bs > 4000 && bs <= 8000)
    {
        hra = bs * 15 / 100;
        da = bs * 60 / 100;
    }
    else if (bs > 8000 && bs <= 12000)
    {
        hra = bs * 20 / 100;
        da = bs * 70 / 100;
    }
    else
    {
        hra = bs * 25 / 100;
        da = bs * 80 / 100;
    }
    gs = bs + hra + da;
    printf("Gross Salary:%.2f\n", gs);
}