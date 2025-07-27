
#define LINKED_LIST_H

#include <stdbool.h>

// Node structure for singly linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// List structure holding head pointer and size
typedef struct {
    Node* head;
    int size;
} List;

// Create an empty list
List* create_list();
// Check if list is empty
bool is_empty(List* lst);
// Get the number of elements in the list
int get_size(List* lst);
// Retrieve value at 1-based position; returns 0 on success, -1 if invalid
int get_value(List* lst, int pos, int* out);
// Set value at 1-based position; same return logic
int set_value(List* lst, int pos, int value);
// Insert value at 1-based position; returns 0 on success, -1 if invalid
int insert_at(List* lst, int pos, int value);
// Remove element at 1-based position; returns 0 on success, -1 if invalid, stores removed value in *out
int remove_at(List* lst, int pos, int* out);
// Print all elements in the list
void print_list(List* lst);
// Free all nodes and the list structure
void free_list(List* lst);
