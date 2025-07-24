#ifndef LIST_H
#define LIST_H

typedef struct Node {
    int value;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
} List;

void create_list(List* l);
int is_empty(List* l);
int get_size(List* l);
int get(List* l, int pos, int* value);
int set(List* l, int pos, int value);
int insert(List* l, int pos, int value);
int remove_at(List* l, int pos);
void print(List* l);

#endif
