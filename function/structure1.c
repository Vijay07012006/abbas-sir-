//Structure -> user defined datatyes
#include<stdio.h>
struct Employee{
    int id;
    char name[100];
    float salary;
};
struct Employee emp;
int main(){
    printf("Enter Id : ");
    scanf("%d",&emp.id);
    printf("Enter name : ");
    scanf("%s",&emp.name);
    printf("Enter salary : ");
    scanf("%f",&emp.salary);
    
    //print here
    printf("ID : %d ",emp.id);
    printf("Name : %s ",emp.name);
    printf("Salary : %.2f ",emp.salary);

}
