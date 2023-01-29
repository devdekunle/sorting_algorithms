#include "sort.h"

/**
*swap_quick - swap two elements
*@a: first
*@b: second
*@array: arr
*@size: size of arr
*Return: nothin
*/

void swap_quick(int *array, int *a, int *b, size_t size)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp
	print_array(array, size);


}

/**
* quick_sort - sort an array using quick sort
*@array: The array to sort
*@size: size of the array
*Return: Nothing
*/

void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, 0, size - 1);

}

/**
* quick_sort_recursion - recursively sort array around pivot
*@array: array to sort
*@low: index of array or subarray to start from
*@high: last index of the array or subarray
*Return: Nothing
*/
void quick_sort_recursion(int *array, int low, int high)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high);
		/*carry out sorting on left portion of array*/
		quick_sort_recursion(array, low, pivot_index - 1);
		/*carry out sorting on right portion of the array*/
		quick_sort_recursion(array, pivot_index + 1, high);
	}



}

/**
* partition - partition an array
*@array: array to partition
*@low: index of array to start from
*@high: last index of the array
*Return: index of the pivot
*/
int partition(int *array, int low, int high)
{
	int pivot_value, i, j;

	/**
	* using Nico Lomuto partition scheme
	* pivot_index should be the last element of the array
	 */
	pivot_value = array[high];


	/**
	 * sort all elements lower than pivot_value to come before it and
	 * sort all elements higher then the pivot_value to come after it
	 */

	i = low;/*start partition from first element*/
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}

	}
	swap_quick(&array[i], &array[high]);

	return (i);

}
