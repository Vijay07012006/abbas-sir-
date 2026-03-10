// // find second largest and second smallest number.
// #include <stdio.h>
// #include <limits.h> // For INT_MIN and INT_MAX

// int main() {
//     int A[10], i;
//     int largest, smallest, slargest, ssmallest;

//     printf("Enter 10 numbers: ");
//     for (i = 0; i < 10; i++) {
//         scanf("%d", &A[i]);
//     }

//     // Initialize
//     largest = smallest = A[0];
//     slargest = INT_MIN;
//     ssmallest = INT_MAX;

//     // Find largest and smallest
//     for (i = 0; i < 10; i++) {
//         if (A[i] > largest)
//             largest = A[i];
//         if (A[i] < smallest)
//             smallest = A[i];
//     }

//     // Find second largest and second smallest
//     for (i = 0; i < 10; i++) {
//         if (A[i] > slargest && A[i] < largest)
//             slargest = A[i];
//         if (A[i] < ssmallest && A[i] > smallest)
//             ssmallest = A[i];
//     }

//     printf("Largest: %d\n", largest);
//     if (slargest == INT_MIN)
//         printf("Second Largest: Not found (all numbers equal)\n");
//     else
//         printf("Second Largest: %d\n", slargest);

//     printf("Smallest: %d\n", smallest);
//     if (ssmallest == INT_MAX)
//         printf("Second Smallest: Not found (all numbers equal)\n");
//     else
//         printf("Second Smallest: %d\n", ssmallest);

//     return 0;
// }

#include <stdio.h>

int main() {
    int A[10], i;
    int largest, second_largest;
    int smallest, second_smallest;

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    // Initialize
    largest = second_largest = A[0];
    smallest = second_smallest = A[0];

    // Find largest and smallest first
    for (i = 1; i < 10; i++) {
        if (A[i] > largest)
            largest = A[i];
        if (A[i] < smallest)
            smallest = A[i];
    }

    // Initialize second_largest and second_smallest properly
    second_largest = smallest;   // minimum possible start
    second_smallest = largest;   // maximum possible start

    // Find second largest and second smallest
    for (i = 0; i < 10; i++) {
        if (A[i] > second_largest && A[i] < largest)
            second_largest = A[i];

        if (A[i] < second_smallest && A[i] > smallest)
            second_smallest = A[i];
    }

    printf("\nLargest = %d", largest);
    printf("\nSecond Largest = %d", second_largest);
    printf("\nSmallest = %d", smallest);
    printf("\nSecond Smallest = %d\n", second_smallest);

    return 0;
}
