#include "sort.h"
int partition(int *array, int start, int end, int size);
void quicksort(int *array, int start, int end, int size);

/**
 * quick_sort - Implementation of quick sort
 * @array: Array to sort
 * @size: Size of array
 * Return: Never
 */
void quick_sort(int *array, size_t size)
{
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

	int j = 0;
	if (start < end)
	{
		j = partition(array, start, end, size);
		quicksort(array, start, j - 1, size);
		quicksort(array, j + 1, end, size);
	
	}
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
	int pivot = array[end], i;
	size_t temp;
	size_t subIndex = start;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			temp = array[i];
			array[i] = array[subIndex];
			array[subIndex] = temp;
			print_array(array, size);
			subIndex++;
		}
		
	}
	temp = array[subIndex];
	array[subIndex] = array[end];
	array[end] = temp;
	print_array(array, size);
	return subIndex;
}
