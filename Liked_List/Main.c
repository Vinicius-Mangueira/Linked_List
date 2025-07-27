#include <stdio.h>
#include "List.h"

int main() {
    List* lst = create_list();
    printf("List created. Empty? %s\n", is_empty(lst) ? "Yes" : "No");

    // Insert elements
    insert_at(lst, 1, 10);
    insert_at(lst, 2, 20);
    insert_at(lst, 3, 30);
    insert_at(lst, 2, 15);
    printf("After insertions: "); print_list(lst);
    printf("Size: %d\n", get_size(lst));

    // Access and modify
    int val;
    if (get_value(lst, 3, &val) == 0) printf("Value at position 3: %d\n", val);
    set_value(lst, 3, 25);
    printf("After set_value at pos 3 to 25: "); print_list(lst);

    // Remove elements
    int rem;
    remove_at(lst, 1, &rem);
    printf("Removed from pos 1: %d\n", rem);
    printf("List now: "); print_list(lst);

    // Cleanup
    free_list(lst);
    return 0;
}
