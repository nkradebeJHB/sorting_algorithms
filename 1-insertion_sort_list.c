#include "sort.h"
listint_t *swap(listint_t **list, listint_t *node);
/**
 * insertion_sort_list -  function that sorts a doubly linked
 * list of integers in ascending order using the Insertion
 * sort algorithm
 *
 * @list: Dobule linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;

	while (node)
	{
		while ((node->prev->n > node->n) && (node->prev))
		{
			node = swap(list, node);
			print_list(*list);
		}
		node = node->next;
	}
}

/**
 * swap - swaps nodes
 *
 * @node: node
 * @list: node list
 * Return: a pointer to a node
 */
listint_t *swap(listint_t **list, listint_t *node)
{
	listint_t *prev_node = node->prev, *cur_node = node;

	prev_node->next = cur_node->next;
	if (cur_node->next)
		cur_node->next->prev = prev_node;
	cur_node->next = prev_node;
	cur_node->prev = prev_node->prev;
	prev_node->prev = cur_node;

	if (cur_node->prev)
		cur_node->prev->next = cur_node;
	else
		*list = cur_node;
	return (cur_node);
}
