#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Prints a specified string to standard output
 *              using the write system call
 *
 * Return: Always 1 (Exit failure)
 */
int main(void)
{
    char name[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = strlen(name);

    if (write(STDOUT_FILENO, name, len) != len)
    {
        return (EXIT_FAILURE);
    }

    return (EXIT_SUCCESS);
}
