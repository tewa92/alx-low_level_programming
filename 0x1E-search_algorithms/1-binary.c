#include "search_algos.h"

/**
  * binary_search - This function implements binary search to
  * find a value in a sorted array of integers.
  * @array: A pointer to the first element of the array to be searched.
  * @size: The number of elements in the array.
  * @value: The value to be searched for.
  *
  * Return: Returns the index of the value if found, otherwise
  * returns -1 if the value is not present or the array is NULL.
  *
  * Description: This function prints the [sub]array being searched
  * after each change during the binary search process.
  */


int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
