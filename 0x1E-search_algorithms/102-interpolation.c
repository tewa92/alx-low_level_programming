#include "search_algos.h"

/**
  * interpolation_search - This function utilizes interpolation search
  * to find a value in a sorted array of integers.
  * @array: A pointer to the first element of the array to be searched.
  * @size: The number of elements in the array.
  * @value: The value to be searched for.
  *
  * Return: Returns the index of the value if found, otherwise returns -1
  * if the value is not present or the array is NULL.
  *
  * Description: This function prints a value each time it is compared in
  * the array during the interpolation search process.
  */


int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
