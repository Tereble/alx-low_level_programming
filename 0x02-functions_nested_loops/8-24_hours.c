#include "main.h"
/**
 * jack_bauer-prints all minutes in a day from 00:00
 *
 * Return:0 if succeesful.
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
		for (i <= 2; i++)
		{
			for (j <= 9; j++)
			{
				for (k <= 5; k++)
				{
					for (m <= 9; m++)
					{
						if (i == 2 && j > 3)
						{break;}
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(':');
						_putchar(k + '0');
						_putchar(m + '0');
						_putchar('\n');
					}
				}
			}
		}
}
