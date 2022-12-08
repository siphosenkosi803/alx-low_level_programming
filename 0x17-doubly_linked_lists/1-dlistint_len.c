#include "lists.h"
/**
*dlistint_len - return the number of element in a linked list
*@head: a pointer to the header of the list
*
*Return: (Success) a positive integer length
*------- (Fail) a negative number
*/
size_t dlistint_len(const dlistint_t *head)

{

	size_t count = 0;



	while (head)

	{

		count++;

		head = head->next;

	}

	return (count);

}
