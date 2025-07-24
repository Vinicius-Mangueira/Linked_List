#ifndef LIST_H
#define LIST_H

#define MAX 100

typedef struct {
    int data[MAX];
    int size;
} List;

void create_list(List *l);
int is_empty(List *l);
int is_full(List *l);
int get_size(List *l);
int get_element(List *l, int pos, int *value);
int set_element(List *l, int pos, int new_value);
int insert_element(List *l, int pos, int value);
int remove_element(List *l, int pos);

#endif
