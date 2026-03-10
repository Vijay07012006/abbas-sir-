#include <stdio.h>
struct Employee
{
    int Id;
    char name[100];
    float salary;
};
int main()
{
    int a, i;
    printf("Enter size of users : ");
    scanf("%d", &a);
    struct Employee emp[a];
    printf("-----------Enter Employee details----------------\n");
    for (i = 0; i < a; i++)
    {
        printf("Enter Employee details : %d \n", i + 1);
        printf("Employee ID : ");
        scanf("%d", &emp[i].Id);
        getchar();
        printf("Employee name : ");
        scanf("%[^\n]", &emp[i].name);
        getchar();
        printf("Employee salary : ");
        scanf("%f", &emp[i].salary);
    }
    printf("-----------Employee Details----------\n");
    for (i = 0; i < a; i++)
    {
        printf("Employee ID :%d\n", emp[i].Id);
        printf("Employee Name :%s\n", emp[i].name);
        printf("Employee Salary :%.2f\n", emp[i].salary);
    }
    printf("-----------Employee Details End----------\n");
}       

// ^ (carret symbol)---->NOT
//  %s ki jagah iska use karo [^\n]
