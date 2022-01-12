#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in\
 * asc ending order using the Bubble sort algorithm.
 * @array: array to be sorted.
 * @size: size of array.
 * Return: Nothing.
 */

void bubble_sort(int *array, size_t size)
{
size_t i;
size_t j;
size_t temp;

if (size < 2)
return;

for (i = 0; i < size; i++)
{
for (j = 0; j < (size - 1) - i; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}
