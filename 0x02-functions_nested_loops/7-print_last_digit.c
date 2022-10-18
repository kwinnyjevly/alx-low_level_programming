#incude "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Description: This function prints the last digit of a number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int n;

	if (n < 0)
		n = -1 * (n % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
