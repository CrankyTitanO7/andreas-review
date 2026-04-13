#include <stdio.h>
#include <stdlib.h>
#include "ll.h"
void ll_reverse(Node **head);
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
    ll_reverse(&head);
    ll_print(head);
    ll_free(head);
    return 0;
}