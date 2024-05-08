#include "search_algos.h"
/**
  * advanced_binary_recursive - This function recursively employs binary
  * search to find a value in a sorted array of integers.
  * @array: A pointer to the first element of the [sub]array to be searched.
  * @left: The starting index of the [sub]array to be searched.
  * @right: The ending index of the [sub]array to be searched.
  * @value: The value to be searched for.
  *
  * Return: If the value is not found, returns -1. Otherwise, returns the index
  * where the value is located.
  *
  * Description: This function prints the [sub]array being searched after each
  * modification during the binary search process.
  */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Utilizes advanced binary search to find a value
  * in a sorted array of integers.
  * @array: A pointer to the first element of the array to be searched.
  * @size: The number of elements in the array.
  * @value: The value to be searched for.
  *
  * Return: Returns -1 if the value is not present or the array is NULL.
  * Otherwise, returns the first index where the value is located.
  *
  * Description: This function prints the [sub]array being searched after
  * each modification during the binary search process.
  */


int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
