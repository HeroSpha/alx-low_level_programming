#include <unistd.h>

/**
 * print_character - writes a character to stdout
 * @c: the character to print
 *
 * Return: 1 on success, -1 on error
 */
int print_character(char c)
{
	return write(1, &c, 1);
}
