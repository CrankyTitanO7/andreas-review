// p09_student.c
#include "ll.h"
#include <stddef.h>
// Connect node at index b so that its next points to node at index a.
// If a or b is out of bounds or a >= b, return 1 and do nothing.
// Otherwise, detach and free any nodes after index b, then set b->next = a->node.
// Return 0 on success.
int ll_make_cycle(Node *head, size_t a, size_t b)
{
    // TODO: implement cycle creation with cleanup.
    return 1;
}