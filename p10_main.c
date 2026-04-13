// p10_main.c
#include <stdio.h>
#include <stdlib.h>
#include "ll.h"
int ll_has_cycle(Node *head);
int main(void)
{
    size_t n;
    if (scanf("%zu", &n) != 1)
        return 0;
    int *a = malloc(sizeof(int) * n);
    for (size_t i = 0; i < n; i++)
        scanf("%d", &a[i]);
    Node *head = ll_from_array(a, n);
    free(a);
    // optional: you could connect nodes here first using ll_make_cycle
    // before calling ll_has_cycle, to test your function.
    printf("%d\n", ll_has_cycle(head));
    // NOTE: We do not free here if a cycle might exist.
    return 0;
}
