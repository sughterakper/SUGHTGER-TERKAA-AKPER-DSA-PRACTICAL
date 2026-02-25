#include <stdio.h>
#include <stdbool.h> // for true/false

#define MAX 100 // Students usually pick a smaller number than 1000

int stack[MAX];
int top = -1; // -1 means it's empty

// Check if empty
bool isEmpty() {
    return top == -1;
}

// Check if full
bool isFull() {
    return top == MAX - 1;
}

// Add to top
void push(int x) {
    if (isFull()) {
        printf("Stack Overflow! Cannot add %d\n", x);
    } else {
        top++;
        stack[top] = x;
        printf("%d pushed to stack\n", x);
    }
}

// Remove from top
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow!\n");
        return -1; 
    } else {
        int val = stack[top];
        top--;
        return val;
    }
}

// Just look at the top
int peek() {
    if (isEmpty()) {
        return -1;
    }
    return stack[top];
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);

    printf("%d popped from stack\n", pop());

    printf("Top element is: %d\n", peek());

    printf("Elements left in stack: ");
    while (!isEmpty()) {
        printf("%d ", pop());
    }
    printf("\n");

    return 0;
}