#include "main.h"

/**
 * print - print variable recursively
 * @var: var
 */
void print(int var)
{
	if (var < 0)

	{
		_putchar('-');
		var = -var;
	}

	if (var / 10)
		print(var / 10);
	_putchar(var % 10 + '0');
}

/**
 * more_numbers - print numbers up to 14
 */

void more_numbers(void)
{
	int aa = 0;

	while (aa < 10)
	{
		int bb = 0;

		do {
			if (bb < 10)
				print(bb);
			else
			{
				print(bb);
			}

		} while (bb < 15);

		aa++;
		_putchar('\n');
	}
}
