#include <stdio.h>
#include <stdbool.h>

#define MAX 100

// Structure for Queue
struct Queue {
    int items[MAX];
    int front;
    int rear;
};

// Function to create / initialize queue
void initQueue(struct Queue *q) {
    q->front = -1;
    q->rear  = -1;
}

// Check if queue is full
bool isFull(struct Queue *q) {
    return (q->rear == MAX - 1);
}

// Check if queue is empty
bool isEmpty(struct Queue *q) {
    return (q->front == -1);
}

// Enqueue operation
void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
        return;
    }

    // If queue is empty
    if (isEmpty(q)) {
        q->front = 0;
    }

    q->rear++;
    q->items[q->rear] = value;

    printf("%d enqueued successfully\n", value);
}
// int main() {
//     struct Queue q;// this is the variable name 
//     initQueue(&q);

//     enqueue(&q, 10);
//     enqueue(&q, 20);
//     enqueue(&q, 30);

//     return 0;
// }

int main() {
    struct Queue *q;// this is the pointer so we donot need the pass the array 
    initQueue(q);

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    return 0;
}