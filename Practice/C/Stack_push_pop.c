#include <stdio.h>

void push(int k, int *top, int arr[], int max) {
    if (*top >= max - 1) {
        printf("Stack Overflow\n");
    } else {
        (*top)++;
        arr[*top] = k;
        printf("Added %d\n",arr[*top]);
    }
}

void pop(int *top, int arr[]) {
    if (*top == -1) {
        printf("Stack Underflow\n");
    } else {
        int removed_val = arr[*top];
        (*top)--;
        printf("Removed %d\n", removed_val);
    }
}

int main() {
    int max = 7;
    int top = -1;
    int arr[7];

    push(24, &top, arr, max);
    push(29, &top, arr, max);
    push(20, &top, arr, max);
    pop(&top, arr);
    push(35, &top, arr, max);
    push(10, &top, arr, max);
    pop(&top, arr);
    push(100, &top, arr, max);

    printf("\nStack contents:\n");
    for (int i = top; i >= 0; i--) {
        printf("|%d|\n", arr[i]);
    }

    return 0;
}
