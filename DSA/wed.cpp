#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int cqueue[MAX];
int front = -1;
int rear = -1;

int isEmptyCQ() {
    return (front == -1);
}

int isFullCQ() {
    return ((rear + 1) % MAX == front);
}

void enqueueCQ(int value) {
    if (isFullCQ()) {
        printf("Circular Queue Overflow! Cannot insert %d\n", value);
        return;
    }
    if (front == -1) { // first element
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }
    cqueue[rear] = value;
    printf("Enqueued (CQ): %d\n", value);
}

int dequeueCQ() {
    if (isEmptyCQ()) {
        printf("Circular Queue Underflow! Nothing to delete\n");
        return -1;
    }
    int value = cqueue[front];
    if (front == rear) { // only one element
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
    printf("Dequeued (CQ): %d\n", value);
    return value;
}

void displayCQ() {
    if (isEmptyCQ()) {
        printf("Circular Queue is empty\n");
        return;
    }
    printf("Circular Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", cqueue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}
