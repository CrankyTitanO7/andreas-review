// ll.c

#include "ll.h"
#include <stdio.h>
#include <stdlib.h>

Node *ll_push_front(Node *head, int v)
{
    Node *n = (Node *)malloc(sizeof(Node));
    if (!n)
        exit(1);
    n->val = v;
    n->next = head;
    return n;
}

Node *ll_from_array(const int *a, size_t n)
{
    Node *head = NULL;
    for (size_t i = 0; i < n; i++)
    {
        Node *node = (Node *)malloc(sizeof(Node));
        if (!node)
            exit(1);
        node->val = a[n - 1 - i];
        node->next = head;
        head = node;
    }
    return head;
}

void ll_free(Node *head)
{
    while (head)
    {
        Node *t = head;
        head = head->next;
        free(t);
    }
}

void ll_print(const Node *head)
{
    const Node *cur = head;
    while (cur)
    {
        printf("%d", cur->val);
        cur = cur->next;
        if (cur)
            putchar(' ');
    }
    putchar('\n');
}

size_t ll_len(const Node *head)
{
    size_t k = 0;
    while (head)
    {
        k++;
        head = head->next;
    }
    return k;
}
