#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	int c_d;
	int m_d;

	while (i <= 98)
	{
		c_d = (i / 10 + '0');
		m_d = (i % 10 + '0');


		if (c_d < m_d)
		{
			putchar(c_d);
			putchar(m_d);

			if (i != 88)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
putchar("\n");
return (0);
}
