/*
WAp to create an array AR with Ten numbers.Now copy even numbers in EAR and ODD numbers in OAR.Now DISplay elements of EAR and OAR.
*/#include <stdio.h>

int main()
{
    int AR[10], EAR[10], OAR[10], i, k = 0, l = 0;
    printf("Enter 10 numbers in Array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &AR[i]);
    }
    for (i = 0; i < 10; i++) {
        if (AR[i] % 2 == 0) {
            EAR[k] = AR[i];
            k++; 
        } else {
            OAR[l] = AR[i];
            l++; 
        }
    }
    printf("\nEven numbers: ");
    for (i = 0; i < k; i++) {
        printf("%d ", EAR[i]);
    }
    printf("\nOdd numbers: ");
    for (i = 0; i < l; i++) {
        printf("%d ", OAR[i]);
    }
}
