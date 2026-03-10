// WAP to use array of structure variables.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct employee
    {
        int empid;
        char empname[50];
        long int salary;
    };
    struct employee emp[3]; // array of structure variable
    int i;
    printf("Enter Details of Employees \n");
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter Employee ID : ");
        scanf("%d", &emp[i].empid);
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
            ;
        printf("Enter Employee name : ");
        fgets(emp[i].empname, sizeof(emp[i].empname), stdin);
        printf("Enter Employee salary : ");
        scanf("%ld", &emp[i].salary);
    }
    printf("\n\nEmployee's Details\n\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nEmplyoee ID=%d\n", emp[i].empid);
        printf("Employee name=%s\n", emp[i].empname);
        printf("Employee salary=%ld\n", emp[i].salary);
    }
}