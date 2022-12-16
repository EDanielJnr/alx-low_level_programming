#include "main.h"

/**
 * _supper - checks if parameter is an upper case character.
 * @c: input character.
 * Return: 1 if its an uppercase character, 0 in other cases.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
