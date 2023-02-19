#include <stdio.h>
/**
 * main - Entry point
 * Return: ALways Return 0
 */

int main(void)
{
	int num1, num2;
	int num3 = 0;

	if (num3 < 10)
	{

		for (num1 = 0; num1 < 9; num1++)
		{
			for (num2 = num3; num2 < 10; num2++)
			{
				if (num1 != num2)
				{
					putchar((num1) + '0');
					putchar((num2) + '0');

					if (num1 != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			num3++;
			putchar("\n");
		}
	}

	return (0);
}
