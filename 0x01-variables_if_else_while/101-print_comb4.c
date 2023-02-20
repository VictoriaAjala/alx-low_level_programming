#include <stdio.h>
/**
 * main - Entry point
 * Return: Always Return 0
 */
int main(void)
{
	int num1 = 0;

	int num2 = 1;
	int num3 = 2;

	while (num1 < 8)
	{
		int i = num2;
		int k = num3;

		while (num2 <= 8 && i <= 8)
		{
			int j = k;

			while (num3 <= 9 && j <= 9)
			{
				if (i != j)
				{
					putchar(num1 + '0');
					putchar(i + '0');
					putchar(j + '0');
					if (num1 < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				j++;
			}
			i++;
			k++;
		}
		num3++;
		num2++;
		num1++;
	}
	putchar('\n');
	return (0);
}

