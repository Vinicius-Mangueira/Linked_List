#include <stdio.h>
#include "list.h"

int main() {
    List l;
    int value;

    create_list(&l);
    insert_element(&l, 1, 10);
    insert_element(&l, 2, 20);
    insert_element(&l, 3, 30);
    set_element(&l, 2, 25);
    remove_element(&l, 1);

    printf("List contents: ");
    for (int i = 1; i <= get_size(&l); i++) {
        get_element(&l, i, &value);
        printf("%d ", value);
    }
    printf("\n");

    return 0;
}
