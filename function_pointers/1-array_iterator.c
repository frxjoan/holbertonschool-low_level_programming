#include "function_pointers.h"
/**
 * array_iterator - Short description, single line
 * @array: D
 * @size: D
 * @action: D
 * Return: Description of the returned value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
