#include "main.h"

/**
 * swap_int - values of two integers
 * @a: integer
 * @b: integer
 */

void swap_int(int *a, int *b)
{
	int fyp;

	fyp = *a;
	*a = *b;
	*b = fyp;
}
