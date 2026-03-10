#include <stdio.h>
#include <math.h>

// Function to check Armstrong number
int isArmstrong(int num) {
    int temp, d, count = 0;
    int arm = 0;
    
    temp = num;
    while (temp > 0) {
        temp = temp / 10;
        count++;
    }
    temp = num;
    while (temp > 0) {
        d = temp % 10;
        arm = arm + pow(d, count);
        temp = temp / 10;
    }
    if (arm == num)
        return 1;  // Armstrong
    else
        return 0;  // Not Armstrong
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

}
