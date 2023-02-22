#include "main.h"

/**
 * print_alphabet_x10 - A function that prints a to z 10 times
 * main - Function
 *
 * Return: On success
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		i++;
	}
}
