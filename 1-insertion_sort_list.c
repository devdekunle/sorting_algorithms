#include "sort.h"
/**
*insertion_sort_list - sort a list using insertion sort
*@list: pointer to head node
*Return: Nothing
*/
void insertion_sort_list(listint_t **list)
{

	listint_t *ptr, *current = NULL;

	if (!*list || !(*list)->next || !list)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		/*set trailing pointer ptr and leading pointer current*/
		ptr = current;
		current = current->next;
		while (ptr != NULL && ptr->prev != NULL)
		{
			if (ptr->prev->n > ptr->n)
			{
				swap_nodes(ptr->prev, ptr);
				if (ptr->prev == NULL)
					/*set *list to head node if ptr is first node*/
					*list = ptr;
				print_list((const listint_t *)*list);

			}
			else

				ptr = ptr->prev;

		}



	}


}

/**
* swap_nodes - swap two nodes of a list
*@a: first node
*@b: second node
*Return: Nothing
*/

void swap_nodes(listint_t *a, listint_t *b)
{
	/*if a is not the first node*/
	if (a->prev != NULL)
		a->prev->next = b;

	/*if b is not last node*/
	if (b->next != NULL)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;

}
