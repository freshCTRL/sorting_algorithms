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
int stp;
int k;

if (size == 0)
return;

i = 0;
stp = 0;
while (i < size - 1)
{
j = 0;
while (j < size - 1 - i)
{
if (array[j] > array[j + 1])
{
k = array[j];
array[j] = array[j + 1];
array[j + 1] = k;
print_array(array, size);
stp = 1;
}
j++;
}
if (stp == 0)
{
break;
}
i++;
}
}
