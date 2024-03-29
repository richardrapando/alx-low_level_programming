#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the
 *            beginning of a list_t list
 * @head: pointer
 * @str: string
 *
 * Return: address of the new element
 *         Otherwise - NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
        list_t *new;
        char *dup_str;
        int len;

        new = malloc(sizeof(list_t));
        if (new == NULL)
                return (NULL);

        dup_str = strdup(str);
        if (dup_str == NULL)
        {
                free(new);
                return (NULL);
        }

        for (len = 0; str[len];)
                len++;

        new->str = dup_str;
        new->len = len;
        new->next = *head;

        *head = new;

        return (new);
}
