#include "main.h"
#include "stdio.h"

/**
 * print_alphabet - Check the code
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char ABC = 'a';

	int EJ = 1;

	while (EJ <= 10)
	{
		ABC = 'a';
		while (ABC <= 'z')
		{
			_putchar(ABC);
			ABC++;
		}
		EJ++;
		_putchar ('\n');
	}
}
