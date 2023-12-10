#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in 
 *             a sorted list of integers
 * @list: pointer to the head of list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to first node where value is located
 *         else - return NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t index, k, m;
listint_t *prev;

if (list == NULL || size == 0)
return (NULL);

m = (size_t)sqrt((double)size);
index = 0;
k = 0;

do {
prev = list;
k++;
index = k * m;

while (list->next && list->index < index)
list = list->next;

if (list->next == NULL && index != list->index)
index = list->index;

printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

} while (index < size && list->next && list->n < value);

printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

for (; prev && prev->index <= list->index; prev = prev->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
if (prev->n == value)
return (prev);
}

return (NULL);
}