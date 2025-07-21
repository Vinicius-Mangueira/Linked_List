//Implement a sequential list of integers, using the vector type, of integers with the following operations:

#include <stdio.h>
#include <stdlib.h>

// 1. Creating the empty list
#define MAX_SIZE 100
typedef struct {
    int data[MAX_SIZE];
    int current_size;
} Sequentialist;
void initList(Sequentialist* list) {
    list-> current_size = 0;
}

// 2. Check if the list is empty

int empty(Sequentialist *List){
    return List -> current_size == 0;
}
//3. Check if the list is full
int full(Sequentialist *List) {
    return List->current_size == MAX_SIZE;
}
// 4. Get list size
int size(Sequentialist *List) {
    return List->current_size;
}

// 6.Insert an element at a specific position;
int insert(Sequentialist *List, int position, int value) {
    if(full(List) || position > List->current_size || position < 0)
        return 0;
    for(int i = List->current_size; i > position; i--) {
        List->data[i] = List->data[i - 1];
    }
    List->data[position - 1] = value;
    List->current_size++;
    return 1;
}

// 7. Remove an element at a specific position
int remove(Sequentialist *List, int position) {
    if((position > List-> current_size) || (position < 1)) return -1;
    int value = List -> data[position - 1];
    for(int i = position - 1; i < List->current_size - 1; i++) {
        List->data[i] = List->data[i + 1];
    }
    List->current_size--;
    return value;
}
