#include "sort.h"
#include "swap.c"
/**
*selection_sort - sort an array using the selction sort method
*@array: array to sort
*@size: size of the array
*Return: nothing
*/

void selection_sort(int *array, size_t size)
{
    size_t min, i, j;

    if (!array || !size)
        return;

    /*loop through each element in the array*/
    for (i = 0; i < size - 1; i++)
    {
        /*assume the minimum is at index i*/
        min = i;
        /*move through list by comparing each element with element at i*/
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;

            }

        }
        if (min != i)
        {
            swap(&array[i], &array[min]);
        }

        print_array(array, size);
    }




}
