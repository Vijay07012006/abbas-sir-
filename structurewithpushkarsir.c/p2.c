#include <stdio.h>
struct address
{
    char city[50];
    char country[100];
};
struct users
{
    char name[100];
    int id;
    struct address city;
};
int main()
{
    struct users emp;
    printf("Enter The name:");
    scanf("%s", &emp.name);
    printf("%s\n", emp.name);

    printf("Enter id:");
    scanf("%d", &emp.id);
    printf("%d\n", emp.id);

    printf("Enter city:");
    scanf("%s", &emp.city);
    printf("%s\n", emp.city);
}
