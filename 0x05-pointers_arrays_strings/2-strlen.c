#include <stdio.h>

/**
 * strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
