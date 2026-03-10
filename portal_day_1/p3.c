#include <stdio.h>
int main()
{
    char branch[100];
    int enrol;
    printf("Enter your branch :\n ");
    fgets(branch, sizeof(branch), stdin);
    printf("Enter your enrollent number :\n");
    scanf("%d", &enrol);
    printf("Branch=%s\n",branch);
    printf("Enrollment number=%d\n", enrol);
}