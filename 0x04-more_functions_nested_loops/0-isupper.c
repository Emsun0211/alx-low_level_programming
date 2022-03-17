#include<main.h>

/**
 * _isupper - check if a character is an upper case
 *
 * return: 0 Always
 **/

int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		printf('1');
	}
	else
	{
		printf('0');
	}
	printf('\n');
	return (0);
}
