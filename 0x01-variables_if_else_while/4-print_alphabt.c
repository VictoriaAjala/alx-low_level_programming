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

		if (Lower_x != 'q' && Lower_x != 'e')
			putchar(Lower_x);

	}

	putchar('\n');
	return (0);
}
