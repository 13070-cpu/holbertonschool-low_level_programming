#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			/* Hour tens and units */
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');

			_putchar(':');

			/* Minute tens and units */
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');

			_putchar('\n');
		}
	}
}
