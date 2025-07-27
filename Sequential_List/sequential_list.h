/* sequential_list.h */

#include <stdbool.h>

// Maximum capacity for the sequential list
#define MAX_SIZE 100

// Sequential list structure holding array and current size
typedef struct {
    int data[MAX_SIZE];
    int size;
} SeqList;

// Create an empty list
void create_list(SeqList* lst);
// Check if list is empty
bool is_empty(const SeqList* lst);
// Check if list is full
bool is_full(const SeqList* lst);
// Get the number of elements in the list
int get_size(const SeqList* lst);
// Retrieve value at 1-based position; returns 0 on success, -1 if invalid
int get_value(const SeqList* lst, int pos, int* out);
// Update value at 1-based position; returns 0 on success, -1 if invalid
int set_value(SeqList* lst, int pos, int value);
// Insert value at 1-based position; returns 0 on success, -1 if invalid or full
int insert_at(SeqList* lst, int pos, int value);
// Remove element at 1-based position; returns 0 on success, -1 if invalid
int remove_at(SeqList* lst, int pos, int* out);
// Print all elements in the list
void print_list(const SeqList* lst);