#include "sort.h"
int partition(int *array, int start, int end, int size);
void quicksort(int *array, int start, int end, int size);
void swap(int *array, int *a, int *b, int size);

/**
 * quick_sort_hoare - Implementation of quick sort
 * @array: Array to sort
 * @size: Size of array
 * Return: Never
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}

/**
 * quicksort - recursive function for quicksort
 * @array: Array to start
 * @start: Start of the array segment
 * @end: End of the array segment
 * @size: Size of the whole array
 * Return: None
 */
void quicksort(int *array, int start, int end, int size)
{

	size_t j = 0;

	if (start < end)
	{
		j = partition(array, start, end, size);
		quicksort(array, start, j - 1, size);
		quicksort(array, j, end, size);

	}
}

/**
 * swap - recursive function for quicksort
 * @array: Array to start
 * @a: Index to swap
 * @b: Index to swap
 * @size: Size of the whole array
 * Return: None
 */
void swap(int *array, int *a, int *b, int size)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
	print_array(array, size);
}

/**
 * partition - recursive function for quicksort
 * @array: Array to start
 * @start: Start of the array segment
 * @end: End of the array segment
 * @size: Size of the whole array
 * Return: None
 */
int partition(int *array, int start, int end, int size)
{
	int pivot = array[end], i = start - 1;
	int j = end + 1;

	while (1)
	{
		do {
			i += 1;
		} while (array[i] < pivot);
		do {
			j -= 1;
		} while (array[j] > pivot);
		if (i >= j)
			return (i);
		swap(array, &array[i], &array[j], size);
	}
	return (i);
}
