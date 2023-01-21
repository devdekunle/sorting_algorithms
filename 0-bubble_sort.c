#include "sort.h"
/**
* bubble_sort - Sort an array using bubble sort algorithm
*
*@array - array to sort
*@size - size of the array
*Return - nothing
*/

void bubble_sort(int *array, size_t size)
{
    size_t i, j, swapped;

    for (i = 0; i < size; i++)
    {
        swapped = 0;
        for (j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap((array + j), (array + j + 1));
                swapped = 1;
                print_array(array, size);

            }
        }
        if (swapped == 0)
            return;
    }
}
/**
* swap - swap two integers
*
*@a: first integer
*@b: second integer
*Return - nothing
*/
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
