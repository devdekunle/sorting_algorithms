#include "sort.h"
/**
* print_array - Print an array of integers
*
@size: Number of elements in the array
@array: The array to be printed
*/

void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        i++;


    }
    printf("\n");


}
