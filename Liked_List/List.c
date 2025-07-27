/* linked_list.c */
#include <stdio.h>
#include <stdlib.h>
#include "List.h"

// Create and initialize an empty list
List* create_list() {
    List* lst = malloc(sizeof(List));
    if (!lst) return NULL;
    lst->head = NULL;
    lst->size = 0;
    return lst;
}

// Return true if the list has no elements
bool is_empty(List* lst) {
    return (lst->size == 0);
}

// Return the current number of elements
int get_size(List* lst) {
    return lst->size;
}

// Helper to find node at given 1-based position
static Node* get_node(List* lst, int pos) {
    if (pos < 1 || pos > lst->size) return NULL;
    Node* cur = lst->head;
    for (int i = 1; i < pos; ++i) {
        cur = cur->next;
    }
    return cur;
}

// Retrieve data at position
int get_value(List* lst, int pos, int* out) {
    Node* node = get_node(lst, pos);
    if (!node) return -1;
    *out = node->data;
    return 0;
}

// Update data at position
int set_value(List* lst, int pos, int value) {
    Node* node = get_node(lst, pos);
    if (!node) return -1;
    node->data = value;
    return 0;
}

// Insert a new node with given value at position
int insert_at(List* lst, int pos, int value) {
    if (pos < 1 || pos > lst->size + 1) return -1;
    Node* node = malloc(sizeof(Node));
    if (!node) return -1;
    node->data = value;
    if (pos == 1) {
        node->next = lst->head;
        lst->head = node;
    } else {
        Node* prev = get_node(lst, pos - 1);
        node->next = prev->next;
        prev->next = node;
    }
    lst->size++;
    return 0;
}

// Remove node at position and return its data
int remove_at(List* lst, int pos, int* out) {
    if (pos < 1 || pos > lst->size) return -1;
    Node* target;
    if (pos == 1) {
        target = lst->head;
        lst->head = target->next;
    } else {
        Node* prev = get_node(lst, pos - 1);
        target = prev->next;
        prev->next = target->next;
    }
    *out = target->data;
    free(target);
    lst->size--;
    return 0;
}

// Print list contents in square brackets
void print_list(List* lst) {
    Node* cur = lst->head;
    printf("[ ");
    while (cur) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("]\n");
}

// Free all nodes and the list structure
void free_list(List* lst) {
    Node* cur = lst->head;
    while (cur) {
        Node* next = cur->next;
        free(cur);
        cur = next;
    }
    free(lst);
}
