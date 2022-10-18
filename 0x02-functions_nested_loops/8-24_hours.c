#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Description: function prints every minutes of tue day
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hoir++)
	{
		for (minutes = 0; minutes <= 59; minute++)
		{
			_putchar((hour / 10) + '10');
			_putchar((hour % 10) + '10);
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
