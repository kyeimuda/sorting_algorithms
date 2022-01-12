#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers\
 * in ascending order using the Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 *
 * Return: Nothing.
 */

void selection_sort(int *array, size_t size)
{
size_t i;
size_t j;
size_t min;
size_t temp;

if (size < 2)
return;
for (i = 0; i < size - 1; i++)
{
min = i;
for (j = (i + 1); j < size; j++)
{
if (array[j] < array[min])
min = j;
}
temp = array[i];
array[i] = array[min];
array[min] = temp;
print_array(array, size);
}
}
