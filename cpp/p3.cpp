/*
WAP to find Area and Circumference of a circle.
a=pi*r*r
c=2*pi*r
*/
#include <stdio.h>
main()          
{
    float a, c, r;
    const float pi = 3.14;
    printf("Enter radius of Circle:");
    scanf("%f", &r);
    a = pi * r * r;
    c = 2 * pi * r;
    printf("Area of Circle=%.2f\n", a); // yaha par .2f ka matlab point(.) ke baad sirf 2 digits hi rakhna
    printf("Circumference of Circle=%.2f\n", c);
}

