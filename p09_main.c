// p09_main.c
#include <stdio.h>
#include <stdlib.h>
#include "ll.h"
    int ll_make_cycle(Node *head, size_t a, size_t b);
int main(void)
{
    size_t n;
    if (scanf("%zu", &n) != 1)
        return 0;
    int *vals = malloc(sizeof(int) * n);
    for (size_t i = 0; i < n; i++)
        scanf("%d", &vals[i]);
    Node *head = ll_from_array(vals, n);
    free(vals);
    size_t a, b;
    if (scanf("%zu%zu", &a, &b) != 2)
        return 0;
    int code = ll_make_cycle(head, a, b);
    printf("%d\n", code);
    // NOTE: We do not free here if a cycle was created.
    return 0;
}