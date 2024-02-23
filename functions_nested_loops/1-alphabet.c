#include "main.h"
#include "stdio.h"

/**
 * print_alphabet - Check the code
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ABC = 'a';

	while (ABC <= 'z')
	{
		_putchar(ABC);
		ABC++;
	}
	_putchar ('\n');
}
