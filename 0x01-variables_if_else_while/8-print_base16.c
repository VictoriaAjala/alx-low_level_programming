#include <stdio.h>
/**
 * main - Entry point
 * Return: ALways return 0
 */

int main(void)
{
	int a = 0;

	char c = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
