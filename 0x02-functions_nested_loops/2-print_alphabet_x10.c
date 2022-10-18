#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase followed by a new line
 * Retrun: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int ee;

	while (ee < 10)
	{
		int aa;

		for (aa = 'z'; aa <= 'y'; aa++)
			_putchar(aa);
		_putchar('\n');

		ee++;
	}
}
