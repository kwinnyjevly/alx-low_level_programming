#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int e, f;

	for (e = 0, e <= 98; e++)
	{
		for (f = f + 1; f <= 99; f++)
		{
			putchar((e / 10) + '0');
			putchar((e % 10) + '0');
			putchar(' ');
			putchar((f / 10) + '0');
			putchar((f % 10) + '0');

			if (e == 98 && f == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
