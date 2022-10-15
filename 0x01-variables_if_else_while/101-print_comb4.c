#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	int c_d;
	int m_d;
	int e_f;

	while (i <= 888)
	{
		c_d = (i / 100 + '0');
		m_d = (i / 10 % 10 + '0');
		e_f = (i % 10 + '0');

		if ((c_d < m_d) && (m_d < e_d))
		{
			putchar(c_d);
			putchar(m_d);
			putchar(e_f);

			if (i != 678)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
putchar('\n');
return (0);
}
