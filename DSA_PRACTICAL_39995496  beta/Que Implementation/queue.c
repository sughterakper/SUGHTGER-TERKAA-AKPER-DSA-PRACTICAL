#include <stdio.h>

#define MAX 10

int queue[MAX];
int front = 0;
int rear = -1;

/* enqueue(x) : add element at the back */
void enqueue(int x) {
    rear++;
    queue[rear] = x;
}

/* dequeue() : remove element from the front */
void dequeue() {
    front++;
}

/* front() */
int frontElement() {
    return queue[front];
}

/* back() */
int backElement() {
    return queue[rear];
}

/* empty() */
int empty() {
    if (front > rear)
        return 1;
    else
        return 0;
}

/* size() */
int size() {
    return rear - front + 1;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Front element: %d\n", frontElement());
    printf("Back element: %d\n", backElement());
    printf("Size: %d\n", size());

    dequeue();

    printf("Front after dequeue: %d\n", frontElement());

    return 0;
}
