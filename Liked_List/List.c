#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void create_list(List* l) {
    l->head = NULL;
}

int is_empty(List* l) {
    return l->head == NULL;
}

int get_size(List* l) {
    int count = 0;
    Node* p = l->head;
    while (p) {
        count++;
        p = p->next;
    }
    return count;
}

int get(List* l, int pos, int* value) {
    if (pos < 1) return 0;
    Node* p = l->head;
    for (int i = 1; i < pos && p; i++)
        p = p->next;
    if (!p) return 0;
    *value = p->value;
    return 1;
}

int set(List* l, int pos, int value) {
    if (pos < 1) return 0;
    Node* p = l->head;
    for (int i = 1; i < pos && p; i++)
        p = p->next;
    if (!p) return 0;
    p->value = value;
    return 1;
}

int insert(List* l, int pos, int value) {
    if (pos < 1 || pos > get_size(l) + 1) return 0;
    Node* new_node = malloc(sizeof(Node));
    if (!new_node) return 0;
    new_node->value = value;
    if (pos == 1) {
        new_node->next = l->head;
        l->head = new_node;
    } else {
        Node* p = l->head;
        for (int i = 1; i < pos - 1; i++)
            p = p->next;
        new_node->next = p->next;
        p->next = new_node;
    }
    return 1;
}

int remove_at(List* l, int pos) {
    if (pos < 1 || is_empty(l) || pos > get_size(l)) return 0;
    Node* temp;
    if (pos == 1) {
        temp = l->head;
        l->head = l->head->next;
    } else {
        Node* p = l->head;
        for (int i = 1; i < pos - 1; i++)
            p = p->next;
        temp = p->next;
        p->next = temp->next;
    }
    free(temp);
    return 1;
}

void print(List* l) {
    Node* p = l->head;
    while (p) {
        printf("%d ", p->value);
        p = p->next;
    }
    printf("\n");
}
