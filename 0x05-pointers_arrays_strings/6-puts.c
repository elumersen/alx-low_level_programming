#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int z = 0;
	int t =0;
	char *s = str;
	int k;

	while (*s != '\0')
	{
		s++;
		z++;
	}
	t = z-1;
	for (k=0; k<=t; k++)
	{
		if(k%2 == 0)
	{
		_putchar(str[k]);
	}
	}
	_putchar('\n');
}
