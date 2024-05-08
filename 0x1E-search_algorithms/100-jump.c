#include "search_algos.h"

/**
  * jump_search - This function implements jump search to find a value in
  * a sorted array of integers.
  * @array: A pointer to the first element of the array to be searched.
  * @size: The number of elements in the array.
  * @value: The value to be searched for.
  *
  * Return: Returns the index of the value if found, otherwise returns -1
  * if the value is not present or the array is NULL.
  *
  * Description: This function prints a value each time it is compared in
  * the array during the jump search process. It uses the square root of the
  * array size as the jump step.
  */


int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
