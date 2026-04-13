// ll.h- singly linked list helpers for driver
#ifndef LL_H
#define LL_H
#include <stddef.h>
typedef struct Node
{
    int val;
    struct Node *next;
} Node;
Node *ll_push_front(Node *head, int v);
// returns new head Node*
Node* ll_from_array(const int *a, size_t n);
// allocates nodes void
ll_free(Node *head);
void ll_print(const Node *head); // space-separated, newline
size_t ll_len(const Node *head);
#endif