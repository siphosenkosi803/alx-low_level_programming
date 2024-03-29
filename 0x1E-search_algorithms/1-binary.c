#include "search_algos.h"
/**
*binary_search - searches for a particular value
*@array: a pointer to the init element to search in
*@size: number of lelements in array
*@value: this is the value to search
*Return: initial index
*/
int binary_search(int *array, size_t size, int value)
{
	size_t entry = 0;
	size_t end_p = size - 1;
	size_t mid;
	size_t b;

	if (array == NULL)
	{
		return (-1);
	}
	while (entry <= end_p)
	{
		printf("Searching in array: ");
		for (b = entry; b < end_p ; b++)
		{
			printf("%i, ", array[b]);
		}
		printf("%i\n", array[end_p]);
		mid = (entry + end_p) / 2;
		if (array[mid] < value)
		{
			entry = mid + 1;
		}
		else if (array[mid] > value)
		{
			end_p = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}

