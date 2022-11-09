#include "main.h"

/**
 * _isupper - checks if a character is upper
 * @c: variable text
 * Return: Alway 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
