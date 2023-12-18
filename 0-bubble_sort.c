#include <stdio.h>
#include "sort.h"

/**
 * swap - Swap two integers
 * @a: First integer
 * @b: Second integer
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - prints the process of the sort
 * @array: Pointer to array
 * @size: size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
size_t i, j;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}

		/* If no two elements were swapped by inner loop, array is already sorted */
		if (swapped == 0)
			break;
	}
}
