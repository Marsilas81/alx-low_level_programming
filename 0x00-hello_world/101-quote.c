#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Print a string in unix without using puts or printf
 *
 * The write() function is a system call used to write data to a file
 * descriptor. It takes three arguments: a file descriptor (1 for
 * the standard output), a pointer to the data to write,
 * and the number of bytes to write. The function returns the number
 * of bytes written, or -1 if an error occurred.
 *
 * Return: 1 (exit_success)
 */

int main(void)
{
	char name[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, name, strlen(name));
	exit(1);
}
