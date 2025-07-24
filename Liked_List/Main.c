#include <stdio.h>
#include "list.h"

int main() {
    List l;
    int value;

    create_list(&l);

    insert(&l, 1, 10);
    insert(&l, 2, 20);
    insert(&l, 3, 30);
    set(&l, 2, 25);
    remove_at(&l, 1);
    get(&l, 2, &value);

    printf("List: ");
    print(&l);

    printf("Element at pos 2: %d\n", value);
    printf("Size: %d\n", get_size(&l));
    printf("Is empty: %d\n", is_empty(&l));

    return 0;
}
