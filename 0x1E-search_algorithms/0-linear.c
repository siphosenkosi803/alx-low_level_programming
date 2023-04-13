#include "search_algos.h"

/**
*linear_search - linear search is utilised to search for a value in an array of intergers
*@array: a pointer to the first element of the array to search in
*@size: represents the number of elements in the array
*@value: this is the value to search for
*
*Return: returns 1st index where value is located or -1 if it is not found or if  array is NULL
*/
int linear_search(int *array, size_t size, int value)
{
    size_t om;

    if (array == NULL || size == 0)
        return (-1);

    for (om = 0; om < size; om++)
    {
        printf("Value checked array[%lu] = [%d]\n", om, array[om]);
        if (array[om] == value)
            return (om);
    }

    return (-1);
}

