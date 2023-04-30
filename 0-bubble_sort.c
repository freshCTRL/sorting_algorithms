#include "sort.h"
/**
 * bubble_sort - Entry point
 * @array: argument to bubble_sort
 * @size: argument to bubble_sort
 *
 * Description - sorts the array by immediate pair of unordered set
*/
void bubble_sort(int *array, size_t size)
{
size_t i, j;
char k;
j = 0;
while (j < size)
{
i = 0;
while (i <= size - 2)
{
if (array[i] > array[i + 1])
{
k = array[i];
array[i] = array[i + 1];
array[i + 1] = k;
print_array(array, size);
}
i++;
}
j++;
}
}
