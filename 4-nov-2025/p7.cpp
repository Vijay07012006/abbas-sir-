//WAP to demonstrate concept of structure
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee{
    int empid;
    char empname[50];
    long salary;
};
int main(){
    struct employee e;
    printf("Enter employee id : ");
    scanf("%d",&e.empid);
    // fflush(stdin);
    getchar();
    printf("Enter emplyoee name : ");
    fgets(e.empname,sizeof(e.empname),stdin);
    e.empname[strcspn(e.empname,"\n")]='\0';
    printf("Enter employee salary : ");
    scanf("%ld",e.salary);

    printf("Employee Details\n");
    printf("Employee Id=%d\n",e.empid);
    printf("Employee name=%s\n",e.empname);
    printf("Employee Salary=%ld\n",e.salary);
}