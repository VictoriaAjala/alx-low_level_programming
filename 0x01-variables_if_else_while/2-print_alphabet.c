#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: Always Return 0
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		int Lower_x = tolower(x);

		putchar(Lower_x);
	}
	return (0);
}
