#include "main.h"

/**
 * print_alphabeth - prints the alphabeth in lowercase
 */
void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
