// WAP to create a structure named student with three members rollno,name,and fee. Now store details of three students and dislplay details (use array of structure variables).
#include <stdio.h>
#include<string.h>
struct student {
    int rollno;
    char name[50];
    float fee;
};

int main() {
    struct student s[3]; 
    int i;

    printf("Enter details of 3 students:\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll No: ");
        scanf("%d", &s[i].rollno);
        getchar(); 

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; 

        printf("Enter Fee: ");
        scanf("%f", &s[i].fee);
    }

    printf("\n----- Student Details -----\n");
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Fee");

    for (i = 0; i < 3; i++) {
        printf("%-10d %-20s %-10.2f\n", s[i].rollno, s[i].name, s[i].fee);
    }
}
