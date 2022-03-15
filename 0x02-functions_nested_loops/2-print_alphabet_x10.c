#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10x
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)

{
	int num = 0;

	while (num < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	_putchar('\n');

	num++;
	}
}
