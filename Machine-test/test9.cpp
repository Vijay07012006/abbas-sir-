// WAP to create a structure with name inventory having id,name,price members,Now store five items and display it in tabular form.
#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct inventory {
    int id;
    char name[30];
    float price;
};

int main() {
    struct inventory item[2];
    int i;

    printf("Enter details of 5 inventory items:\n");

    for(i = 0; i < 2; i++) {
        printf("\nItem %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &item[i].id);
        printf("Enter Name: ");
        scanf("%s", item[i].name);
        printf("Enter Price: ");
        scanf("%f", &item[i].price);
    }

    // Display header
    printf("\n---------------------------------------------\n");
    printf("| %-5s | %-20s | %-10s |\n", "ID", "Name", "Price");
    printf("---------------------------------------------\n");

    // Display items in tabular form
    for(i = 0; i < 2; i++) {
        printf("| %-5d | %-20s | %-10.2f |\n", item[i].id, item[i].name, item[i].price);
    }

    printf("---------------------------------------------\n");

}
