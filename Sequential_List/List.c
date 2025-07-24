#include "list.h"

void create_list(List *l) {
    l->size = 0;
}

int is_empty(List *l) {
    return l->size == 0;
}

int is_full(List *l) {
    return l->size == MAX;
}

int get_size(List *l) {
    return l->size;
}

int get_element(List *l, int pos, int *value) {
    if (pos < 1 || pos > l->size) return 0;
    *value = l->data[pos - 1];
    return 1;
}

int set_element(List *l, int pos, int new_value) {
    if (pos < 1 || pos > l->size) return 0;
    l->data[pos - 1] = new_value;
    return 1;
}

int insert_element(List *l, int pos, int value) {
    if (is_full(l) || pos < 1 || pos > l->size + 1) return 0;
    for (int i = l->size; i >= pos; i--) {
        l->data[i] = l->data[i - 1];
    }
    l->data[pos - 1] = value;
    l->size++;
    return 1;
}

int remove_element(List *l, int pos) {
    if (is_empty(l) || pos < 1 || pos > l->size) return 0;
    for (int i = pos - 1; i < l->size - 1; i++) {
        l->data[i] = l->data[i + 1];
    }
    l->size--;
    return 1;
}
