#include "main.h"

/**
 * _islower - checks if a character is lower case
 * @C: the character
 * Return: 1 if the letter is lower, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
