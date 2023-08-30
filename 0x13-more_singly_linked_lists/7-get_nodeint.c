#include "lists.h"


/**
* get_nodeint_at_index - returns the node at a the certain index ot the  linked list
* @head: first node in the linked list ....value
* @index: index of the node to retur .....n
* Return: pointer to the node we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

	unsigned int i = 0;

	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
