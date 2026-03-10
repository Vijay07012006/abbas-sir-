// WAP to demonstrate concept of structure
#include <stdio.h>

struct employee
{
    int empid;
    char empname[50];
    long int salary;
};

struct employee emp;

int main()
{
    printf("Enter Employee's details\n");

    printf("Enter Employee ID : ");
    scanf("%d", &emp.empid);
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
    printf("Enter Employee name : ");
    fgets(emp.empname, sizeof(emp.empname), stdin);
    printf("Enter Employee salary : ");
    scanf("%ld", &emp.salary);

    printf("\nEmployee's details :\n");
    printf("Employee ID = %d\n", emp.empid);
    printf("Employee name = %s\n", emp.empname);
    printf("Employee salary = %ld\n", emp.salary);
}
