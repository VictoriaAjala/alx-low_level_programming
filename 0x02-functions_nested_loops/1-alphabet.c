#include "main.h"
/**
 * print_alphabet - A function that prints a to z
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriate
 */
void print_alphabet(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
