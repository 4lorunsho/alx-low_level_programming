#include <stdio.h>

/**
 * main - prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e == 56)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(e);
				putchar(i);
			}
		}
	}
	putchar('\n');
	return (0);
}
