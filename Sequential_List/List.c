#include <stdio.h>
#include <string.h>
#include "sequential_list.h"

void create_list(SeqList* lst) {
    lst->size = 0;
}

bool is_empty(const SeqList* lst) {
    return (lst->size == 0);
}

bool is_full(const SeqList* lst) {
    return (lst->size >= MAX_SIZE);
}

int get_size(const SeqList* lst) {
    return lst->size;
}

int get_value(const SeqList* lst, int pos, int* out) {
    if (pos < 1 || pos > lst->size) return -1;
    *out = lst->data[pos - 1];
    return 0;
}

int set_value(SeqList* lst, int pos, int value) {
    if (pos < 1 || pos > lst->size) return -1;
    lst->data[pos - 1] = value;
    return 0;
}

int insert_at(SeqList* lst, int pos, int value) {
    if (is_full(lst) || pos < 1 || pos > lst->size + 1) return -1;
    // Shift elements right
    for (int i = lst->size; i >= pos; --i) {
        lst->data[i] = lst->data[i - 1];
    }
    lst->data[pos - 1] = value;
    lst->size++;
    return 0;
}

int remove_at(SeqList* lst, int pos, int* out) {
    if (is_empty(lst) || pos < 1 || pos > lst->size) return -1;
    *out = lst->data[pos - 1];
    // Shift elements left
    for (int i = pos; i < lst->size; ++i) {
        lst->data[i - 1] = lst->data[i];
    }
    lst->size--;
    return 0;
}

void print_list(const SeqList* lst) {
    printf("[ ");
    for (int i = 0; i < lst->size; ++i) {
        printf("%d ", lst->data[i]);
    }
    printf("]\n");
}
