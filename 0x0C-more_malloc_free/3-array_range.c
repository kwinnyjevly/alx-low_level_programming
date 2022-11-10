#include "main.h"
#include <stdlib.h>

/**
 * @min: ...
  * @max: ...
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
int *a, i = 0;

if (min > max)
return (NULL);

while (min <= max)
{
a[i] = min;
i++;
min++;
}
return (a);
}
