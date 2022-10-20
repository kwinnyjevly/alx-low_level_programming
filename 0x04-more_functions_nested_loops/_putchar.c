#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to printf
 * Return: on success 1 else -1
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
