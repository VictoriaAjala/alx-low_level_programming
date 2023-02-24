#include "main.h"
/**
 * _isupper - A function to check for uppercase
 * @c: a character
 *
 * Return: answer(0)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
