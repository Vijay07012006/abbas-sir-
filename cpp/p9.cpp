// WAP to take cordinates of a point as input.Now find it's Quadrant.
#include <stdio.h>
main()
{
    int x, y;
    printf("Enter cordinates of a point\n : ");
    scanf("%d%d", &x, &y);
    if (x > 0 && y > 0)
    {
        printf("(%d,%d)-> First Quadrant\n", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("(%d,%d)-> Second Quadrant\n", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("(%d,%d)-> Third Quadrant\n", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf("(%d,%d)-> forth Quadrant\n", x, y);
    }
    else if (x == 0 && y == 0)
    {
        printf("(%d,%d)-> Origin\n", x, y);
    }
    else if (x == 0 && y > 0)
    {
        printf("(%d%d)-> positive y-axis\n", x, y);
    }
    else if (x > 0 && y == 0)
    {
        printf("(%d%d)-> positive x-axis\n", x, y);
    }
    else if (x == 0 && y < 0)
    {
        printf("(%d%d)-> Negative y-axis\n", x, y);
    }
    else if (x < 0 && y == 0)
    {
        printf("(%d%d)-> Negative x-axis\n", x, y);
    }
}