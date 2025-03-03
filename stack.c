#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

struct Node *stackTop;

int empty() { return stackTop == NULL; }
void clear() {
    while (!empty())
        pop();
}

void push(int num) {
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = num;
    newNode->next = stackTop;
    stackTop = newNode;
}


int pop() {
    int data = stackTop->data;
    struct Node *temp = stackTop;
    stackTop = stackTop->next;
    free(temp);
    return data;
}

void copy_to_array(int *array, size_t space) {
    struct Node *current = stackTop;
    size_t i = 0;
    while (current != NULL) {
        array[i] = current->data;
        current = current->next;
        i++;
    }
}
// Implement your team's function here!
