#include "sort.h"
#include "string.h"
void swap_us(listint_t **head, listint_t *ptra, listint_t *ptrb);
/**
 * swap_us - entry_point.
 * @head: head of the whole list passed
 * @ptra: node to be swap with ptr2
 * @ptrb: node to be swap with ptr1
 * Description - this function swaps two nodes
*/
void swap_us(listint_t **head, listint_t *ptra, listint_t *ptrb)
{
listint_t *store, *store1, *p1, *p2;
if ((ptra->prev != NULL) && (ptrb->next != NULL))
{
p1 = ptra->next;
p2 = ptrb->prev;
if (ptra->next == ptrb)
{
store = ptra->prev;
store1 = ptrb->next;
ptra->next = store1;
ptra->prev = ptrb;
ptrb->next = ptra;
ptrb->prev = store;
store->next = ptrb;
store1->prev = ptra;
}
else
{
store = ptra->prev;
store1 = ptrb->next;
ptra->next = store1;
ptra->prev = ptrb;
ptrb->next = ptra;
ptrb->prev = store;
p2->next = ptra;
p1->prev = ptrb;
store->next = ptrb;
store1->prev = ptra;
}
}
if ((ptrb->next == NULL) && (ptra->prev != NULL))
{
store = ptra->prev;
ptra->next = NULL;
ptra->prev = ptrb;
ptrb->next = ptra;
ptrb->prev = store;
store->next = ptrb;
}
if ((ptra->prev == NULL) && (ptrb->prev != NULL))
{
store = ptrb->next;
ptra->next = store;
ptra->prev = ptrb;
ptrb->prev = NULL;
ptrb->next = ptra;
store->prev = ptra;
*head = ptrb;
}
}
/**
 * insertion_sort_list - Entry point
 * @list: argument to insertion_sort_list
 * Description: sort a list by insertion method
*/
void insertion_sort_list(listint_t **list)
{
listint_t *mst = NULL, *temp, *lst, *deb;
int i, d, g;
lst = *list;
for (i = 0; lst; i++)
lst = lst->next;
if (i <= 1)
return;
if (i == 2)
{
deb = (*list)->next;
deb->prev = NULL;
(*list)->next = NULL;
deb->next = *list;
*list = deb;
print_list(*list);
}
for (g = 1; g < i; g++)
{
mst = *list;
for (d = 1; d < g; d++)
mst = mst->next;
temp = mst->next;
for (d = g; ((d >= 1) && (mst->n > temp->n)); d--)
{
swap_us(list, mst, temp);
if (temp->prev != NULL)
mst = temp->prev;
print_list(*list);
}
}
}
