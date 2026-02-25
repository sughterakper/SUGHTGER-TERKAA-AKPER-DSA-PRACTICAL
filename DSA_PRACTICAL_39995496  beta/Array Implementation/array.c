#include <stdio.h>

#define MAX 100

int arr[MAX];
int n = 0;   // current number of elements

// check empty
int isEmpty() {
    return (n == 0);
}

// size
int size() {
    return n;
}

// insert element
void insert(int pos, int value) {
    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return;
    }

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;
}

// delete element
void deleteElement(int pos) {
    if (pos < 0 || pos >= n) {
        printf("Invalid position\n");
        return;
    }

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;
}

// get element
int get(int pos) {
    if (pos < 0 || pos >= n)
        return -1;

    return arr[pos];
}

// set element
void setValue(int pos, int value) {
    if (pos < 0 || pos >= n)
        return;

    arr[pos] = value;
}

// display array
void display() {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// main function
int main() {

    insert(0, 10);
    insert(1, 20);
    insert(2, 30);
    insert(1, 15);

    printf("Array: ");
    display();

    deleteElement(2);

    printf("After deletion: ");
    display();

    printf("Element at index 1: %d\n", get(1));

    return 0;
}